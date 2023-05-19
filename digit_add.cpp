/*26. Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms. 
Go to the editor
Sample Output:
Input number of terms: 5
1 + 11 + 111 + 1111 + 11111*/


#include<iostream>



using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 1;i<=n;i++){
            ans = ans*10+i;
        }
            cout<<ans<<endl;
    
    return 0;
}