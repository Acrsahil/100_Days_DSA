#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;

        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i<n; i++){
            cin >> a[i];
        }
                
        for(int i = 0; i<n; i++){
            cin >> b[i];
        }
            
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int mina = a[0];
        int minb = b[0];

        long long int suma = 0;
        long long int sumb = 0;

        for(auto i : b){
            suma += (mina+i);
        }
        for(auto i : a){
            sumb += (minb + i);
        }
    cout << min(suma,sumb) << endl;
    }
    return 0;
}