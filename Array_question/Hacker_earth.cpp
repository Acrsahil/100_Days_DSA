#include <iostream>
using namespace std;


int pow(int n,int p){
    int ans = 1;
    for(int i = 0; i<p; i++){
        ans *= n;
    }
    return ans;
}
int main(){
	int N;
	
	cin>>N;
	int arr[N];
	int ans = 1;

    for(int i = 0; i<N; i++){
        cin>>arr[i];
    }
	for(int i = 1; i<=N; i++){
		ans = (ans * arr[i]) % pow(10,9) + 7;
	}
	cout<<ans<<endl;
}

