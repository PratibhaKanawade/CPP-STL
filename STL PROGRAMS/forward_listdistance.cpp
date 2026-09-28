#include<iostream>
#include<forward_list>
using namespace std;

int main(){

    forward_list<int> fl ={10,33,57,8,3,98};

    cout<<"number of elements in forward_list is: ";
    cout<<distance(fl.begin(),fl.end());
}