#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int ,5> arr={10,40,20,66};

    int maximum=arr[0];

    for(int i=0;i<arr.size();i++){

        if(arr[i]> maximum){
            maximum=arr[i];
        }
    }

    cout<<" maximum element is:"<<maximum;
}