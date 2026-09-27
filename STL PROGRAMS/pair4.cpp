#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){

    vector<pair<int,int>>  v = {
                        {101,20},
                        {1,30},
                        {11,12},
                        {81,40}
    };

    pair<int,int> smallest = v[0];

    for(int i=0;i<v.size();i++){

    if(v[i].first < smallest.first){
        smallest =v[i];
    }

      } 

      cout<<"pair having smallest first value: ";

        cout<<smallest.first<<"  "<<smallest.second;
      
}