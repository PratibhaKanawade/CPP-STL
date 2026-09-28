#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int ,5> arr={10,40,20,66};

    for(int i=arr.size()-1 ;i>=0; i--){

        cout<<arr[i]<<" ";
    }

    return 0;

}