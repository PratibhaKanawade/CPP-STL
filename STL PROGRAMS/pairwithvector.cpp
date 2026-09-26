#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<pair<char,string>> animal;

    animal.push_back({'t',"Tiger"});
     animal.push_back({'l',"lion"});
      animal.push_back({'r',"rabbit"});

      for(auto p: animal){
        
        cout<<p.first<<" ";
        cout<<p.second<<endl;
      }

}