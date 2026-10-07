#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int ,string> students;

    students[101]="Pratibha";
    students[211]="Neha";
    students[300]="Raj";

    for(auto x: students){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}