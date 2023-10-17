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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        string ans = "";
        for (int i = 1; i <= k; i++)
        {
            int length = n / k;
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (length <= 0)
                {
                    ans += ch;
                    break;
                }
                length--;

                if (mp[ch])
                {
                    mp[ch]--;
                }
                else
                {
                    ans += ch;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
