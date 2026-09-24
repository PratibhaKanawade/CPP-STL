#include<iostream>
using namespace std;

class add {
public:

int operator()(int a,int b) {
    return a+b;
}
};

int main(){

    add obj;

    int result =obj(10,20);

    cout<<result;
}