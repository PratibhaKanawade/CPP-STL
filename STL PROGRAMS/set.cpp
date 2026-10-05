#include<iostream>
#include<set>
using namespace std;

void display(set<int>s){
for(int x:s){
cout<<x<<" ";
 }
cout<<endl;
}

int main(){

    set<int> s={10,20,10,30,40,20,10,50};

    s.insert(40);
    s.insert(60);

    cout<<"your set size is:";
    cout<<s.size();
    cout<<endl;

    cout<<"your element is found(true):";
    cout<<s.count(30);
    cout<<endl;

    cout<<"after erasing your set is (no.of element erase):";
    cout<<s.erase(60);
    cout<<endl;

    cout<<"set after clear:";
    s.clear();
    cout<<endl;
}