
#include <iostream>
using namespace std;


void reverseAnArray(int arr[], int n){
    int start = 0;
    int end = n - 1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = arr[temp];
        start++;
        end--;
    }
}
void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}
int main() {
	//code
	int t, n;
	cin>>t;
	while(t > 0){
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n ; i++){
	        cin >> arr[i];
	    }
	    reverseAnArray(arr,n);
	    printArray(arr,n);
	    t--;
	    
	}
	return 0;
}