#include<iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter number to check prime or not ";
   cin>>n;

   bool isPrime = 1;

   for(int i=2; i*i<=n; i++){
       if(n%i == 0){
           isPrime = 0;
           break;

       }
   }
   if(isPrime == 0){
       cout<<"Not a Prime number"<<endl;
   }
   else{
       cout<<"Prime number"<<endl;
   }
   return 0;
}