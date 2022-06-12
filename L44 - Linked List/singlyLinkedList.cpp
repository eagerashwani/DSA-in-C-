#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node "<<value<<endl;

    }

};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;

}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    //Edge case : agr start mey add krna ho 
    if(position == 1){
        insertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    //Edge case(Tail pointer update) Inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    //creating node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;


}

void deleteNode(int position, Node* &head){

    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free
        temp->next = NULL;
        delete temp;

    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}

void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

   // create a new node
   Node* node1 = new Node(10);

//    cout<< node1->data << endl;
//    cout<< node1->next << endl;

   Node* head = node1;
   Node* tail = node1;
   printLL(head);

   insertAtTail(tail,12);
   printLL(head);

   insertAtTail(tail,15);
   printLL(head);

   insertAtPosition(head,tail,22,4);
   printLL(head);

   deleteNode(1,head);
   printLL(head);

   return 0;
}