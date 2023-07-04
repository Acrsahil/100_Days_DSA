#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        int ans = 0;
        cin >> N >> K;
        int A[N];

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int i = 0;
        int min = A[0];  // first element of the Array of A
        while (i < N) {
           if(A[i] < min){
            min = A[i];
           } // calculate the minimum  element of Array
            i++;
        }
        if(min<K){   // checks wheater the element of Array of A is less then K or not
        ans = K - min; // if so  subtract  min from K and store in ans
        }else{
            ans = 0;
        }
        cout<< ans << endl; // Print the existing value of ans (optional)
    }

    return 0;
}
