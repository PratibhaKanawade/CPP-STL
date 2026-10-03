#include<iostream>
#include<queue>
#include<list>
using namespace std;

int main(){

    queue<int, list<int>> q;


    q.push(10);
    q.push(33);
    q.push(90);
    q.push(11);

    cout<<"queue elements are:";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


}