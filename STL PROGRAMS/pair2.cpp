#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){

    vector<pair<int,int>>  v = {
                        {10,20},
                        {5,30},
                        {15,10},
                        {8,40}
    };

    pair<int,int> smallest = v[0];

    for(int i=0;i<v.size();i++){

    if(v[i].second < smallest.second){
        smallest =v[i];
    }

      } 

      cout<<"pair having smallest second value: ";

        cout<<smallest.first<<"  "<<smallest.second;
      
}