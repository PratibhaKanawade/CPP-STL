#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<pair<int ,int> > v ={{101,20},
                        {1,33},
                        {10,12},
                        {81,45}};

int x =101;
int y =20;

bool found =false;

for(int i=0;i<v.size();i++){

    if(v[i].first==x && v[i].second==y ){

        found = true;
        break;
    }
}

if(found){
    cout<<"pair exists";
}

else{
    cout<<"pair not exists";
}
}