#include<iostream>
using namespace std;

void reverseString(string& s, int st, int en){

    if(st>en)
        return;

    swap(s[st], s[en]);
    st++;
    en--;

    reverseString(s, st, en);
    
}
int main() {
    string s = "Ashwani"; // string in double quotes always
    reverseString(s, 0, s.length()-1);
    cout << s << endl;
   return 0;
}