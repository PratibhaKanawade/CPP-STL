#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int ,vector<int> ,greater<int>> pq;

    pq.push(10);
    pq.push(33);
    pq.push(5);
    pq.push(88);
    pq.push(32);

    cout<<"your minimum priority queue is: ";

    while(!pq.empty()){
        cout<<pq.top()<<" ";
       pq.pop();
    }
}