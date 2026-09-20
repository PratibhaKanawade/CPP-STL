#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v ={10,50,20,40,30};  //here vector container is used

    sort(v.begin() , v.end());   //here sort() algorithm is used

    for(int x: v)
    {
        cout<<x<<" ";
    }

    
    return 0;
}
