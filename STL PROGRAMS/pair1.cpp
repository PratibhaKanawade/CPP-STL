#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){

    vector<pair<int ,int>> v = {
                                  {10,20},
                                  {5,30},
                                  {15,10},
                                  {8,40}
    };

    pair<int,int> largest = v[0];

    for(int i=0;i<v.size();i++){
     
        if(v[i].first > largest.first){

            largest=v[i];
        }
    }

   cout<<"pair having largest first value: ";

   cout<<largest.first<<" "<<largest.second;

}
