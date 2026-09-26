#include<iostream>
#include<utility>
using namespace std;

int main(){

    pair<int,pair<int ,int>> number={1,{10,20}};

    cout<<number.first<<endl;
    cout<<number.second.first<<endl;
    cout<<number.second.second<<endl;

    return 0;
}