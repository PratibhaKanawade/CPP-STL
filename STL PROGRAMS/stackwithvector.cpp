#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

    stack<int, vector<int>> s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(60);

    int topElement = s.top();

    cout<<"stack element is:";
    while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
    }

    cout<<endl;

    cout<<"stack top element is:";
    cout<<topElement;
}