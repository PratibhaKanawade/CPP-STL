#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> dq ={7,34,25,76,98,22};

    dq.erase(dq.begin() +3);

    cout<<"your deque after erasing index 3 element is: ";

    for(int x:dq){
        cout<<x<<" ";
    }
}