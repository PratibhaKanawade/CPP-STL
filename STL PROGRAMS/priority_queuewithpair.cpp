#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<pair<int ,string>> pq ;

    pq.push({21,"Pratibha"});
    pq.push({9,"Lata"});
    pq.push({33,"Ram"});
    pq.push({66,"Ganesh"});
    pq.push({12,"Raj"});

    cout<<"your pair with first highest priorty is:";
    cout<<pq.top().first<<" "<<pq.top().second<<endl;


}