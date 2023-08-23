#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = 0;
    map<string,int> mp {{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};
    while(n--){
        string st;
        cin>>st;
        for(auto it : mp){
            if(it.first == st){
                ans += it.second;
            }
        }


    }
    cout<<ans<<endl;
    return 0;
}