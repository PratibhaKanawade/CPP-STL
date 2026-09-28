#include<iostream>
#include<list>
using namespace std;

int main(){

    list<string> s={"Pratibha","Pallavi","Raj","Om","Priya"};

    auto it =s.begin();

    advance(it,3);

    s.erase(it);

    for(string x : s){
        cout<<x<<"  ";
    }


}