#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v ={10,20,30,10,50,10,60};

    cout<<"Before:";

    for(int x:v){
        cout<<x<<" ";
    }

    cout<<endl;

    //remove all 10
    v.erase(remove(v.begin(), v.end() ,10) ,v.end());

    cout<<"After:";

    for(int x:v){
        cout<<x<<" ";
    }


}