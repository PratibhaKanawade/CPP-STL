#include<iostream>
#include<vector>
using namespace std;

int main( ){

    vector<int> v ={10,20,30,40,50};

    cout<<"Before:";

   for(int x:v){
    cout<<x <<" ";
   }

   cout<<endl;

   v.pop_back();

   cout<<"After:";

   for(int x:v){
    cout<<x<<" ";
   }

}
