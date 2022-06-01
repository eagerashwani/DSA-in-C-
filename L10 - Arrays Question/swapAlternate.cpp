#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
}
void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1<n){
        swap(arr[i], arr[i+1]);

        }
    }
}
int main() {
    int arr[6] = {1,2,3,4,5,6};
    int odd[7] = {23,53,23,53,76,13,67};
    swapAlternate(arr,6);
    display(arr,6);
    cout << endl;
    swapAlternate(odd,7);
    display(odd,7);
   return 0;
}