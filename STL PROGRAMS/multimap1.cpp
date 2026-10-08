#include<iostream>
#include<map>
using namespace std;

int main(){

    multimap<int ,string> mm;

    mm.insert({21,"Pratibha"});
    mm.insert({20,"Priya"});
    mm.insert({21,"Om"});
    mm.insert({10,"Raj"});
    mm.insert({21,"Ram"});

    cout<<"All students:"<<endl;

    for(auto x: mm){
        cout<<x.first<<" "<<x.second<<" "<<endl;
    }

    cout<<"\nNumber of students with key 21:";
    cout<<mm.count(21)<<endl;

    cout<<"\nStudent with key 21:"<<endl;

    auto range=mm.equal_range(21);

    for(auto it= range.first;it!=range.second;it++){
        cout<<it->first<<"->"<<it->second<<endl;
    }
}

