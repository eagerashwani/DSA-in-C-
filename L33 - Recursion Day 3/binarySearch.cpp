#include<iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int key){
    //base case
    if(s>e)
        return -1;
    int mid = s + (e-s)/2;
    
    if(arr[mid] == key)
        return mid;
    
    if(arr[mid]>key){
        return binarySearch(arr, s, mid - 1, key);
    }
    else{
        return binarySearch(arr, mid + 1, e, key);
    }
}


int main() {
    int arr[10] = {2,3,4,5,6,7,8,9,10,11};
    int key = 9;
    int ans = binarySearch(arr, 0, 10, key);
    cout << ans << endl;

   return 0;
}