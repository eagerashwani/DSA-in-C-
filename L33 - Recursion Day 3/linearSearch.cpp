#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){

    if(n==0)
        return false;

    
    
    if(arr[0] == key)
        return true;

    return linearSearch(arr+1, n-1, key);

}
int main() {
    int arr[10] = {2,4,7,4,2,7,9,4,5,1};
    int key = 4;
    bool ans = linearSearch(arr,10,key);
    if(ans){
        cout << "Key is Present" << endl;
    }
    else
        cout << "Key is Absent" << endl;
   return 0;
}