#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> dq ={2,98,6,45,37,12};

    for(auto it=dq.begin() ; it!=dq.end() ; it++){
        cout<<*it<<" ";
    }
}