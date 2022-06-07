#include<iostream>
#include <climits>
using namespace std;

int getmin(int arr[], int size){

    int min = INT_MAX;

    for(int i=0; i<size; i++){
      
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int getmax(int arr[], int size){

    int max = INT_MIN;

    for(int i=0; i<size; i++){
      
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    //write your code here
    int n;
    cin>>n;

    int arr[10000];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int ans = getmax(arr,10000);
    cout << ans;
    return 0;
}