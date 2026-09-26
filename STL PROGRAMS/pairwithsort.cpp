#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    //example 1
    vector<pair<int ,string>> v ={{20,"A" }, {10,"B"}, {30,"C"} };

    sort(v.begin(),v.end());

    for(auto x:v){

        //HERE we Sort pairs by the first value instead of the second.
       cout<<x.first<<" "<<x.second<<endl;
    }

    cout<<"---------------------------------------"<<endl;

    //example 2
    vector<pair<int, string>> s = {{20, "C"}, {30, "A"}, {10, "B"}
     };
    sort(s.begin(),s.end());

    for(auto p:s){

        //HERE we Sort pairs by the second value instead of the first.
       cout<<p.second<<" "<<p.first<<endl;
    }


    return 0;
}