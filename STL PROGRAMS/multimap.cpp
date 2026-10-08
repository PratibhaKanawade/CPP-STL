#include<iostream>
#include<map>
using namespace std;

int main(){

    multimap<string,string> mm;

    mm.insert({"ENTC","Pratibha"});
    mm.insert({"ENTC","Lata"});
    mm.insert({"CSE","Pallavi"});
    mm.insert({"ENTC","Babasaheb"});

    for(auto x:mm){
        cout<<x.first<<" ,  "<<x.second<<endl;
    }
    

}