#include<iostream>
using namespace std;

void walking(int src, int des){
    cout <<"Src " << src << " Des "<< des << endl;
    if(src == des){
        cout << "Ruk Jana";
        return;
    }
    src++;
    walking(src,des);
}
int main() {
    int src = 1;
    int des = 10;

    walking(src,des);
   return 0;
}