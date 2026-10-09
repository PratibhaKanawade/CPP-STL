#include<iostream>
#include<unordered_map>
using namespace std;

void display(unordered_map<int,string> um){
    for(auto x: um){
        cout<<x.first<<"  "<<x.second<<endl;
    }
    cout<<endl;
}

int main(){

    unordered_map<int ,string> um ;

    um.insert({21,"Pratibha"});
    um.insert({44,"Priya"});
    um.insert({10,"Raj"});
    um.insert({23,"Ram"});
    display(um);

    cout<<"updated unordered_map:"<<endl;
    um[23]="Radha";
    display(um);

    cout<<"check whether 21 key present or not:";
    cout<<um.count(21)<<endl;
    cout<<endl;

    cout<<"unordered_map after removing key:"<<endl;
    um.erase(21);
    display(um);


    cout<<"size of unordered_map is:";
    cout<<um.size()<<endl;


    cout<<"\ncheck whether unordered_map is empty or not:";
    if(um.empty()){
        cout<<"unordered_map is empty"<<endl;
    }
    else{
        cout<<"unordered_map is not empty"<<endl;
    }
    


    cout<<"\ncheck whether key is found or not:";
    auto it = um.find(21);

    if(it!=um.end()){
        cout<<"key found";
    }
    else{
        cout<<"key not found";
    }


}
