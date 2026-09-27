#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int,5> arr ={10,20,30,40,50};

    int sum=0;

    for(int x:arr){
        sum=sum+x;
    }

    cout<<"sum of array is:"<<sum;

}