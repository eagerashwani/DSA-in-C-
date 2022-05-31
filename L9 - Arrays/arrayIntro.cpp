#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing..."<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing done"<<endl;
}

int main(){

    int number[14];  //declare

    //Garbage value milegi
    cout<<"Number at 2 idx "<<number[6]<<endl; //access krne ke liye

    int second[4] = {1,2,3,4};  //initialize array
    cout<<"Value at 3 idx "<<second[3]<<endl;

    int third[10] = {3,5};
    int n = 10;
    for(int i=0; i<n; i++){
        cout<<third[i]<<" ";  //: 3 5 0 0 0 0 0 0 0 0
    }

    int fourth[15] = {0};
    n=15;
    cout<<"Printing the array"<<endl;
    for(int i=0; i<n; i++){
        cout<<fourth[i]<<" "; //: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
    }


    // Initialize with 1 is not possible
    int fifth[9] = {1};
    n = 9;
    printArray(fifth,n);

    // cout<<"Printing the array"<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<fifth[i]<<" "; //: 1 0 0 0 0 0 0 0 0
    // }

    //Initalize with any element
    int sixth[10];
    n = 10;
    for(int i=0; i<n; i++){
        sixth[i] = 5;
    }
    cout<<"Printing the array"<<endl;
    for(int i=0; i<n; i++){
        cout<<sixth[i]<<" ";  //: 5 5 5 5 5 5 5 5 5 5
    }

    //size
    int sixthSize = sizeof(sixth)/sizeof(int);
    cout<<"Sixth Size "<<sixthSize<<endl; // not good that's why we send size explicitly in printArray


    return 0;
}