#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long

int main()
{       test{

        int n;
        cin >> n;
        
        if(n&1){
            if(n == 3){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
                int temp = n/2;
                for(int  i = 1; i<=n; i++ ){
                    if(i&1){
                        cout << temp - 1 << " ";
                    }else{
                        cout << -temp << " ";
                    }
                    
                }
                cout << endl;
            }
        }else{
            cout << "YES" << endl;
            for(int i = 1; i<=n; i++){
                if(i&1){
                    cout << -1 << " ";
                }else{
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
        
}
    return 0;
}