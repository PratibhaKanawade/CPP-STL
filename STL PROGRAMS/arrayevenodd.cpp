#include<iostream>
#include<array>
using namespace std;

int main(){

     array<int,5> arr ={5,20,88,91,10};

     int even=0;
     int odd=0;

     for(int i=0;i<arr.size();i++){

        if(arr[i]% 2==0){
            even++;
        }

        else{
            odd++;
        }
     }
     cout<<"even:"<<even<<endl;
     cout<<"odd:"<<odd;
}