#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v ={2,5,8,0,1,4};

    cout<<"element at index 0 is:";
    cout<<v[0]<<endl;


   cout<<"element at index 5 is:";
    cout<<v.at(5);
}
