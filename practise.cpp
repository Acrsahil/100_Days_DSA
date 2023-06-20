#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;    //Reading input from STDIN
	for(int i = 0; i<n; i++){
		for(int j = 0; j<i; i++){
			cout<<"*";
		}
		for(int k = n; k>0; k--){
			cout<<"#";
		}
			for(int j = 0; j<i; i++){
			cout<<"*";
		}
		cout<<endl;
	}

}