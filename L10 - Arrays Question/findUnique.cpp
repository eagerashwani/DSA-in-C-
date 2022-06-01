#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i]; //XOR same value ko cancel kr deta hai, 5 ^ 5 = 0;
    }
    return ans;
}

int main() {
   return 0;
}