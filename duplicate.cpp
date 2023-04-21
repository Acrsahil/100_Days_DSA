#include <iostream>
using namespace std;

int main() {
    int A[5] = {17,3,9,5,3};


    int result = 0;

    for (int i = 0; i < 5;i++) {
        result = result^A[i];
    }
    for (int i = 1;i<5;i++){
        result = result^i;
    }

    // result now contains the "target" element
    cout << result << endl; // Output: 5

    return 0;
}