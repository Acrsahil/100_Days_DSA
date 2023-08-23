#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, n;
    vector<int> ct;
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        cin >> a >> b >> n;
        while (a <= n && b <= n)
        {
            if (a < b)
            {
                a += b;
                count++;
            }
            else
            {
                b += a;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}