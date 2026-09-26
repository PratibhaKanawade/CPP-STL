#include<iostream>
#include<utility>
using namespace std;

int main(){

    pair<int,int> p1 ={10,20};
    pair<int,int> p2 ={30,30};

    cout<<"addition of two strings:"<<endl;

    cout<<(p1.first+p1.second)<<endl;

    cout<<(p2.first+p2.second)<<endl;

    cout<<(p1.first+p1.second) +  (p2.first+p2.second);

    return 0;
}