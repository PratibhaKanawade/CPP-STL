#include<iostream>
#include<queue>
using namespace std;

void display(priority_queue<int> pq){
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main(){

    cout<<"priority queue is:";
    priority_queue<int> pq;

    pq.push(1);
    pq.push(33);
    pq.push(88);
    pq.push(50);
    pq.push(34);

    display(pq);
    cout<<endl;

    cout<<"top element is:";
    cout<<pq.top()<<endl;
    cout<<endl;


    cout<<"your priority queue after popping of element:";
    pq.pop();
    display(pq);
    cout<<endl;

    cout<<"size of your priority queue is:";
    cout<<pq.size();
    cout<<endl;
}