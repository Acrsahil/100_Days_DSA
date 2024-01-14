#include<bits/stdc++.h>
using namespace std;
      int main() {
        int t;
        cin>>t;
        while(t--){

            int n;

            cin>>n;

            set<string> s;
            string sk;
            cin>>sk;
            for(int i = 0; i<n-1; i++){
                string st = "";
                st+= sk[i];
                st+= sk[i+1];
                s.insert(st);
            }
                              cout<<s.size()<<endl;
        }
      }
