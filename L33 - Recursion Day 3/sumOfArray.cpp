#include<iostream>
using namespace std;

int sumArray(int arr[], int n){
    if(n==0)
        return 0;
    if(n==1)
        return arr[0];

    return arr[0] + sumArray(arr+1, n-1);
}
int main() {
    int arr[6] = {4,2,5,7,7,2};
    int ans = sumArray(arr,6);
    cout << ans << endl;
   return 0;
}