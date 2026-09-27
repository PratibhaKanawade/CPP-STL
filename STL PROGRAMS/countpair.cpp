#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){

    vector<pair<int ,int> > v ={{101,20},
                        {1,33},
                        {10,12},
                        {81,45}};

int count=0;

for(int i=0;i<v.size();i++){

    if(v[i].first>10){

        count++;

        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

}

cout<<"number of pairs having first value greater than 10 is:"<<count;

}
