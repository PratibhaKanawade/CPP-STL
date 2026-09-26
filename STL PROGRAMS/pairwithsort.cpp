#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    //example 1
    vector<pair<int ,string>> v ={{20,"A" }, {10,"B"}, {30,"C"} };

    sort(v.begin(),v.end());

    for(auto x:v){
       cout<<x.first<<" "<<x.second<<endl;
    }

    cout<<"---------------------------------------"<<endl;

    //example 2
    vector<pair<int, string>> s = {{10, "B"}, {10, "A"}, {20, "C"}
     };
    sort(s.begin(),s.end());

    for(auto p:s){
       cout<<p.first<<" "<<p.second<<endl;
    }


    return 0;
}