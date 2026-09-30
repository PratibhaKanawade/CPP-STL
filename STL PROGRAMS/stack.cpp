#include<iostream>
#include<stack>
using namespace std;

//function to display stack
void display (stack <string> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl;
}

int main(){

     cout<<"your stack is: ";
    stack<string> s;

    s.push("Pratibha");
    s.push("Lata");
    s.push("Ram");
    s.push("Om");
    s.push("Priya");

    display(s);
    cout<<endl;

    cout<<"after push element in stack is: ";
    s.push("Raj");
    display(s);
    cout<<endl;

    cout<<"after pop element in stack is: ";
    s.pop( );
    display(s);
    cout<<endl;

    cout<<"size of stack is : ";
    cout<<s.size()<<endl;
    cout<<endl;

    cout<<"top element of stack is: ";
    cout<<s.top();

}