#include<iostream>
#include<forward_list>
using namespace std;

int main(){

    forward_list<int> fl ={10,33,57,8,3,98};

    //this removes all even numbers.
    fl.remove_if([](int x){
        return x % 2==0;
    });

    for(int x:fl){
        cout<<x<<" ";
    }
}
