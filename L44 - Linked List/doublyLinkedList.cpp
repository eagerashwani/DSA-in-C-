#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;

    }
    else{

    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = NULL;
        head = NULL;

    }
    else{

    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
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
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert-> prev = temp;


}

int main() {

    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    cout<< node1->data << endl;
    cout<< getLength(head) << endl;


    insertAtHead(head, 12);
    printLinkedList(head);

    insertAtTail(tail,15);
    printLinkedList(head);

    insertAtPosition(head,tail,100,2);
    printLinkedList(head);

    insertAtPosition(head,tail,101,1);
    printLinkedList(head);

    insertAtPosition(head,tail,106,6);
    printLinkedList(head);
   return 0;
}