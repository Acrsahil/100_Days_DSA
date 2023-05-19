#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;

    vector<int> a(5,1);

    vector<int> last(a);

    cout<<"print last "<<endl;

    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity "<<v.capacity()<<endl;
    cout<<"Capacity->"<<v.size()<<endl;

    cout<<"Element of 2nd index: "<<v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size"<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    

    return 0;
}