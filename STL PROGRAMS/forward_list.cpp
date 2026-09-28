#include<iostream>
#include<forward_list>
using namespace std;

void display(forward_list<int> fl){
    for(int x: fl){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){

    cout<<"your forward_list is:";
    forward_list<int> fl={10,38,99,99,54,8,82};
    display(fl);
    cout<<endl;

    cout<<"forward_list after push_front():";
    fl.push_front(50);
    display(fl);
    cout<<endl;

    cout<<"forward_list after pop_front():";
    fl.pop_front();
    display(fl);
    cout<<endl;

    cout<<"forward_list  after front():";
    cout<<fl.front()<<endl;
    cout<<endl;
    

    cout<<" forward_list  after remove(99):";
    fl.remove(99);
    display(fl);
    cout<<endl;

    cout<<"forward_list  after sort():";
    fl.sort();
    display(fl);
    cout<<endl;

    cout<<"forward_list  after reverse():";
    fl.reverse();
    display(fl);
    cout<<endl;

    cout<<" forward_list  after unique():";
    fl.unique();
    display(fl);
    cout<<endl;

    cout<<"forward_list  after clear():";
    fl.clear();
    display(fl);
    cout<<endl;

}






