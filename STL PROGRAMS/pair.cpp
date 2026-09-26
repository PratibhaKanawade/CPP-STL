#include<iostream>
#include<utility>
using namespace std;

int main(){

    //direct initialization
    pair<int ,string> student = {21,"Pratibha"};
   
    cout<<student.first<<endl;
    cout<<student.second<<endl;

    //make_pair by using initialization
    pair<float,string> make_pk(2.5,"Pratibha");

    cout<<make_pk.first<<endl;
     cout<<make_pk.second<<endl;


}