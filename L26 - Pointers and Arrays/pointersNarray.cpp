#include<iostream>
using namespace std;
int main() {
    int arr[10] = {2,3,5};

    cout<< arr << endl;
    cout<< &arr << endl;
    cout<< &arr[0] << endl;

    int a[10];
    cout<< sizeof(a) << endl;
    int *ptr = &arr[0];
    cout<< sizeof(&ptr) << endl;


   return 0;
}