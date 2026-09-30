#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> dq ={9,40,22,90,78,1,55};

    auto it=dq.begin() +2;

    dq.insert(it,0);

   cout<<" your deque after insertion is: ";

    for(int x:dq){
        cout<<x<<"  ";
    }
}