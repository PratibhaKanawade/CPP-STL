#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int,5> arr ={10,20,30,40};

    cout<<"first element is:"<<arr.front()<<endl;
    cout<<"last element is:"<<arr.back()<<endl;
    cout<<"element at index two is:"<<arr.at(2)<<endl;
    cout<<"size of array is:"<<arr.size();

    cout << "Array elements: ";

    for(int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}