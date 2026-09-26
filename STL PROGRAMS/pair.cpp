#include<iostream>
#include<utility>
using namespace std;

int main(){

    //direct initialization
    pair<int ,string> student = {21,"Pratibha"};
   
    cout<<student.first<<"  ";
    cout<<student.second<<endl;

    //changing pair values
       student.first=36;
       student.second="Kanawade";
       cout<<student.first<<" ";
       cout<<student.second<<endl;


    //make_pair by using initialization
    pair<float,string> make_pk(2.5,"Raj");

    cout<<make_pk.first<<"  ";
     cout<<make_pk.second<<endl;


}