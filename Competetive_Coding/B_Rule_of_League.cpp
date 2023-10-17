#include <bits/stdc++.h>
using namespace std;

#define F(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define ln long long int
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define ll long long

int main()
{
    test
    {
        int n, x, y;
        cin >> n >> x >> y;

        if (x <= 0 && y <= 0)
        {
            cout << -1 << endl;
        }
        else if (x > 0 && y > 0)
        {
            cout << -1 << endl;
        }
        else
        {
        if(x== 0){
            swap(x,y);
        }
        if((n-1)%x == 0){
            int count = 1; 
            for(int i = 1; i<=(n-1)/x; i++){
                for(int j = 1; j<=x; j++){
                    cout << count << " ";
                }
                if(count == 1){
                    count ++;
                }
                count += x;
            }
        }else{
            cout << -1 << endl;
        }
        }
    }
    return 0;
}