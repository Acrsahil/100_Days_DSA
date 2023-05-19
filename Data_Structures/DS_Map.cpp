#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[1] = "Sahil";
    m[3] = "Sugam";
    m[2] = "Nirdesh";
    

    m.insert({5,"bheem"});

    cout<<"before erase"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 2 -> "<<m.count(2)<<endl;

    m.erase(3);


    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(2);

    for(auto i = it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

    


    return 0;
}