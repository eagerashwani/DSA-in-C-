#include<iostream>
using namespace std;
int main() {
   int n;
   int a = 0, b = 1,c;
   cout<<"Fibo series till "<<endl;
   cin>>n;

   for(int i=0; i<n; i++){
     cout<<a<<" ";
     c = a+b;
     a = b;
     b = c;
   }
   return 0;
}