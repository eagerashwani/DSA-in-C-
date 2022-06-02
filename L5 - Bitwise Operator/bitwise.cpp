#include<iostream>
using namespace std;
int main() {
   int a = 4, b = 3;

   cout<<" a & b "<<(a&b)<<endl;
   //4
   cout<<" a | b "<<(a|b)<<endl;
   //7
   cout<<" ~a "<< (~a)<<endl;
   //-5
   cout<<" a ^ b "<<(a^b)<<endl;
   //7

   cout<<"Left shift "<<(5<<1)<<endl;
   //10
   cout<<"Left shift "<<(5<<2)<<endl;
   //20
   cout<<"Right shift "<<(5>>1)<<endl;
   //2
   cout<<"Right shift "<<(5>>2)<<endl;
   //1

   int i = 9;
   cout<<"i++ "<<(i++)<<endl;
   //9, i = 10
   cout<<"++i "<<(++i)<<endl;
   //11, i = 11
   cout<<"i-- "<<(i--)<<endl;
   //11, i = 10
   cout<<"--i "<<(--i)<<endl;
   //9, i = 9

   return 0;
}