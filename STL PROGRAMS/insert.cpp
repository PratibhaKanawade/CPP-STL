#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> v = {4,5,6,7};

    v.insert(v.begin() , 10);

    v.insert(v.begin() +2 , 20);

    v.insert(v.end() -1, 30);

    v.insert(v.end() , 40);


    for(int x: v){
        cout<<x<<"  ";
    }
}