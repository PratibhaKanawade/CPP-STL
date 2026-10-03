#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>q){
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }
  cout<<endl;
}

int main(){

    cout<<"your queue is:";
    queue<int> q ;

   q.push(10);
   q.push(22);
   q.push(55);
   q.push(88);

   display(q);
   cout<<endl;

   cout<<"front elements is:";
   cout<<q.front()<<endl;
   cout<<endl;

   cout<<"back element is:";
   cout<<q.back()<<endl;
   cout<<endl;

   cout<<"queue after removing front element is:";
   q.pop();
   display(q);
   cout<<endl;

   cout<<"size of queue is:";
   cout<<q.size();



}
