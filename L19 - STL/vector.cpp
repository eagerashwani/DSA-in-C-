#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> a;
    cout<<"Size "<<a.size()<<endl;  //0
    cout<<"Capacity "<<a.capacity()<<endl;  //0

    a.push_back(1);
    cout<<"Size "<<a.size()<<endl; //1
    cout<<"Capacity "<<a.capacity()<<endl; //1
    a.push_back(2);
    cout<<"Size "<<a.size()<<endl;  //2
    cout<<"Capacity "<<a.capacity()<<endl;  //2
    a.push_back(3);
    cout<<"Size "<<a.size()<<endl; //3
    cout<<"Capacity "<<a.capacity()<<endl;  //4
    a.push_back(4);
    cout<<"Size "<<a.size()<<endl; //4
    cout<<"Capacity "<<a.capacity()<<endl;  //4
    a.push_back(5);
    cout<<"Size "<<a.size()<<endl; //5
    cout<<"Capacity "<<a.capacity()<<endl;  //8

    //copy a vector
    vector<int> b(a);
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"At "<<b.at(3)<<endl;
    cout<<"Front "<<b.front()<<endl;
    cout<<"Back "<<b.back()<<endl;

    b.pop_back();
    cout<<"After Pop ";
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> c(5,1);  //5-> Size and 1-> all element initial value
    for(int i:c){
        cout<<i<<" ";
    }
    cout<<endl;

    c.clear();
    cout<<"Size of c "<<c.size()<<endl;
    cout<<"Capacity of c "<<c.capacity()<<endl;
   return 0;
}