#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout<<fact<<endl;
    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int dem = factorial(r) * factorial(n - r);
    cout<<n-r<<endl;
    return num / dem;
}
int main()
{
    int n, r;
    cout << "Enter the value of n and r" << endl;
    cin >> n >> r;
    int ans = nCr(n, r);
    cout << "The Answer is : " << ans << endl;
    return 0;
}