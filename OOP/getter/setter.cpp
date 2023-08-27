#include <bits/stdc++.h>
using namespace std;

class hero{
    private:
    string name = "sahil";
    int id_no;

    public:
    string getter(){
        return name;
    }

    int setter(int n){
        id_no = n;
        return id_no;
    }
    
};
int main()
{
    hero h1;
    
    string name = h1.getter();
    cout<<name<<endl;

    int health = 12;
    cout<<h1.setter(health)<<endl;

    
    return 0;
}