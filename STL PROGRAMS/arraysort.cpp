#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){

    array<int ,5> arr ={10,20,30,40,50};

    array<int ,5> arrsorted=arr;

    sort(arrsorted.begin(),arrsorted.end());

    if(arr==arrsorted){
        cout<<"array is sorted";
    }

    else{
        cout<<"array is not sorted";
    }
}

