#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){

    vector<pair<int ,int> > v ={{101,20},
                        {1,33},
                        {11,12},
                        {81,45}};


    cout<<"pairs whose second value is even : "<<endl;

    for(int i=0;i<v.size();i++){

        if(v[i].second % 2 == 0){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        
    }
    

}