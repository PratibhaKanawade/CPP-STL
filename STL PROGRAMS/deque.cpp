#include<iostream>
#include<deque>
using namespace std;

//function to display list
void display (deque <int> dq){
    for(int x : dq){
        cout<<x<<"  ";
    }

    cout<<endl;
}

int main(){

    cout<<"your deque is: ";
    deque<int> dq ={10,9 ,56,9,44,50,9,44,10};
    display(dq);
    cout<<endl;

    cout<<"size of deque is : ";
    cout<<dq.size()<<endl;
    cout<<endl;

    cout<<"first element in deque is: ";
    cout<<dq.front()<<endl;
    cout<<endl;


    cout<<"last element in deque is : ";
    cout<<dq.back()<<endl;
    cout<<endl;


    cout<<"program after push_front()  and push_back(): ";
    dq.push_front(5);
    dq.push_back(55);
    display(dq);
    cout<<endl;

    cout<<"program after pop_front() and pop_back(): ";
    dq.pop_front();
    dq.pop_back();
    display(dq);
    cout<<endl;

    cout<<"After clearing all deque: ";
    dq.clear();
    display(dq);

}