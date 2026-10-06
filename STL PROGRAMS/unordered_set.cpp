#include<iostream>
#include<unordered_set>
using namespace std;

void display (unordered_set<int> us){
    for(int x: us){
        cout<<x<<" ";
    }
cout<<endl;
}

int main(){

    cout<<"your unordered_set is:";
    unordered_set<int> us ={10,40,20,50,78,33};

   us.insert(1);
   display(us);
   cout<<endl;

   cout<<"element found(true) :";
   cout<<us.count(40)<<endl;
   cout<<endl;

   cout<<"your unordered_set after erasing an element:";
   us.erase(10);
   display(us);
   cout<<endl;

   cout<<"size of unordered_set is:";
   cout<<us.size()<<endl;
   cout<<endl;

   cout<<"unordered_set after clear:";
   us.clear();
   display(us);
   cout<<endl;



}