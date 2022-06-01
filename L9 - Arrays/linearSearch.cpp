#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main() {
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   int key;
   cout<<"Enter search element"<<endl;
   cin>>key;
   bool isfound = search(arr,10,key);
   if(isfound){
       cout<<"Key is present"<<endl;
   }
   else{
       cout<<"Key is absent"<<endl;
   }
   return 0;
}