#include<iostream>
#include<utility>
using namespace std;

int main(){

    //check second pair is greater than first string
pair<int, int> p1 = {10, 20};
pair<int, int> p2 = {10, 30};
cout<<"second pair is greater than first string: ";
cout << (p1 < p2)<<endl;

    //check first pair is greater than second string
pair<int, int> count = {10, 20};
pair<int, int> count2 = {10, 30};
cout<<"first pair is not greater than second string: ";
cout << (count > count2)<<endl;

   //check first pair and second pair are equal
pair<string,int>pk={"Pratibha",21};
pair<string,int>pk2={"Pratibha",21};
cout<<"first pair and second pair is equal:";
cout<<(pk==pk2);

return 0;
}