#include <bits/stdc++.h>
using namespace std;

void divisor(int n){
    int cnt = 0;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        if(n%i == 0){
            cout << i << " " << n/i << endl;
            cnt ++;
            sum += i;
        }
    }
    cout << cnt << " " <<sum << endl;
}
void divisor2(int n){
    int cnt = 0;
    int sum = 0;
    for(int i = 1; i*i<=n; i++){
        if(n%i == 0){
            cout << i << " " << n/i << endl;
            cnt += 1;
            sum += i;
            if(n/i !=i){
                sum += n/i;
                cnt += 1;
            }
        }
    }
    cout << cnt << " " <<sum << endl;
}
int main()
{
    int n = 36;
    cout << "Method 1" << endl;
    divisor(n);

    cout << "Method 2" << endl;
    divisor2(n);
    return 0;
}