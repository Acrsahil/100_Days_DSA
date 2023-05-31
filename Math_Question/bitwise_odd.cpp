#include<iostream>
using namespace std;
int modularExponentiation(int x, int n, int m) {
	long long ans = 1;
	while (n > 0) {
		if (n & 1) {
			ans = (1LL*(ans) * x % m) % m;
		}
		x = (1LL*(x) % m * (x) % m) % m;
		n = n >> 1;
	}
	return ans;
}


int main(){
    long long x = 10000000 ,n=10 ,m=10000005;
    long long ans = modularExponentiation(x,n,m);
    cout<<ans<<endl;
    
    return 0;
}