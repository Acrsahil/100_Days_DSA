#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxi = 1;
    int mini = 1;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            mini++;
        }
        else
        {
            mini = 1;
        }
        if (mini > maxi)
        {
            maxi = mini;
        }
    }
    cout << maxi << endl;
    return 0;
}