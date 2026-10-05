#include<iostream>
#include<set>
using namespace std;
void display(multiset<int> ms){
    for(int x:ms){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){

    multiset<int> ms={10,20,30,10,40,20,50,20};

    cout<<"your multiset after inserting element:";
    ms.insert(60);
    display(ms);

    cout<<"total count of 10 is:";
    cout<<ms.count(10);
    cout<<endl;

    cout<<"total no. of 20s erasing:";
    cout<<ms.erase(20);
    cout<<endl;

    cout<<" size of your multiset is:";
    cout<<ms.size();
    cout<<endl;




}