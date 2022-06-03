#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main() {
    int evenArr[10] = {2,4,6,8,10,12,14,16,18,20};
    int oddArr[7] = {3,5,7,8,9,10,13};

    int evenIdex = binarySearch(evenArr, 10, 15);
    int oddIndex = binarySearch(oddArr, 7, 33);

    cout<<" Even arr 14 at "<< evenIdex << endl;
    cout<<" Odd arr 13 at "<< oddIndex << endl;
   return 0;
}