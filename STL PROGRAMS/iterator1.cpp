#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main(){

    vector<int> v ={10,20,30};

    cout<<"begin():" <<*v.begin()<<endl;
    cout<<"rbegin():" <<*v.rbegin()<<endl;
    cout<<"cbegin():" <<*v.cbegin()<<endl;

    cout<<"forward traversal: ";
    for(auto it = v.begin() ; it !=v.end() ; it++){
        cout<<*it<<" ";
    }

    cout<<"\nReverse Traversal: ";
    for(auto it = v.rbegin() ; it !=v.rend() ; it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    return 0;
}
