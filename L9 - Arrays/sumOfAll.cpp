#include<iostream>
using namespace std;
int main() {
   int size;
   int sum = 0;
   cin>>size;
   int arr[3];
   for(int i=0; i<size; i++){
     cin>>arr[i];
   }
   for(int i=0; i<size; i++){
     sum += arr[i];
   }
   cout<<"The sum is "<<sum<<endl;
   return 0;
}