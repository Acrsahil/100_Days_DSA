#include <iostream>
#include <string>
using namespace std;

void solve(string &s, int start, int end) {
    cout << s << endl;
    if(start>=end){
        return;
    }
    s[start] = s[start] ^ s[end];
    s[end] = s[start] ^ s[end];
    s[start] = s[start] ^ s[end];

    solve(s,start+1,end-1);
}

int main() {
    string input;

    // Input the string
    cout << "Enter a string: ";
    cin >> input;

    // Reverse the string using recursion
    solve(input, 0, input.length() - 1);

    // Output the reversed string
    cout << "Reversed string: " << input << endl;

    return 0;
}
