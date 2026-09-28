#include<iostream>
#include<forward_list>
using namespace std;

int main(){

    forward_list<int> fl ={10,44,6,8,99};

    auto it=fl.begin();

    //here it was pointing to 10, so 44 get removed.
    fl.erase_after(it);

    for(int x: fl){
        cout<<x<<" ";
    }

}