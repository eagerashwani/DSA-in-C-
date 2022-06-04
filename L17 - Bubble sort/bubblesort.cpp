#include<iostream>
using namespace std;

void bubbleSort(){
    for(int i=1; i<n; i++){
        bool swapped = false;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}
int main() {
   return 0;
}