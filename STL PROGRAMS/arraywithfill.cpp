#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int,5> arr;

    arr.fill(100);

    for(int x: arr){
        cout<<x<<"  ";
    }
}