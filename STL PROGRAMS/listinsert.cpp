#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l = {10,3,8,55,20};

    auto it=l.begin();

    advance(it,2);

    l.insert(it,30);

    for(int x: l){
        cout<<x<<"  ";
    }
}