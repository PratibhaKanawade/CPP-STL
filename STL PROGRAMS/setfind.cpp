#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s={10,30,40,20,50};

    if(s.find(30) !=s.end()){
        cout<<" element found";
    }
    else{
        cout<<"element not found";
    }

    
}
