#include<iostream>
using namespace std;
int main() {
   for(int i=0; i<5; i++){
       cout<<" HI "<< endl;
       cout<<" Hye "<< endl;
       continue;  // skip i

       cout<<" Itna ignore "<< endl;
   }
   return 0;
}