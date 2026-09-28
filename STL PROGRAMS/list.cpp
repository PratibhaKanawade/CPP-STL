#include<iostream>
#include<list>
using namespace std;

//function to display list
void display(list<int>l){
    for(int x : l){
        cout<<x<<"  ";
    }

    cout<<endl;
}

int main(){

    cout<<"your list is: ";
    list<int> l ={10,9 ,56,9,44,50,9,44,10};
    display(l);
    cout<<endl;

    cout<<"size of list is : ";
    cout<<l.size()<<endl;
    cout<<endl;

    cout<<"first element in list is: ";
    cout<<l.front()<<endl;
    cout<<endl;


    cout<<"last element in list is : ";
    cout<<l.back()<<endl;
    cout<<endl;


    cout<<"program after push_front()  and push_back(): ";
    l.push_front(5);
    l.push_back(55);
    display(l);
    cout<<endl;

    cout<<"program after pop_front() and pop_back(): ";
    l.pop_front();
    l.pop_back();
    display(l);
    cout<<endl;

    cout<<"sorted list is: ";
    l.sort();
    display(l);
    cout<<endl;
 
    cout<<"after removing of consecutive duplicate elements: ";
    l.unique();
    display(l);
    cout<<endl;

    cout<<"after reversing list: ";
    l.reverse();
    display(l);
    cout<<endl;

    cout<<"After removing elements having a 9 value: ";
    l.remove(9);
    display(l);

}