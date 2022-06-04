#include<iostream>
using namespace std;
int main() {
   int i = 5;
   int *p = &i;
   cout<< "Address is "<< p << endl;
   cout<< "Value is " << *p << endl;

   int *q = 0;
   q = &i;
   cout<< "Address is "<< q << endl;
   cout<< "Value is " << *q << endl;

   int a = 4;
   int b = a;
   b++;
   cout << a << endl;  
   
   int *ptr = &a;
   cout << "Before " << endl;
   (*ptr)++;
   cout << "After " << a << endl;

   // Copy of pointer
   int *qtr = ptr;
   cout << ptr << " -> " << qtr << endl;
   cout << *ptr << " -> " << *qtr << endl;

   return 0;
}