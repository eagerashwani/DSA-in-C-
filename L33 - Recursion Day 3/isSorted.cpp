#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    //base case
    if(n == 0 || n == 1)
        return 1;
    
    if(arr[0]>arr[1])
        return 0;
    else
        return isSorted(arr+1, n-1);
}
int main() {
    int arr[7] = {1,2,3,4,5,9,7};
    bool ans = isSorted(arr,7);
    if(ans)
        cout<<"Array is sorted" << endl;
    else
        cout<<"Array is not sorted" << endl;
   return 0;
}