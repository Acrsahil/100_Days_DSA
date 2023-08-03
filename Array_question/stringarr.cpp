#include <iostream>
using namespace std;

int main()
{
    char alph[26];
    char start = 'a';
    for (int i = 0; i < 26; i++) {
        alph[i] = start;
        start++;
    }
    string str[9]; // Reduce the size to match the required output
    int i = 0;
    int j = 2; // Move the 'j' variable outside of the loop
    while (i < 26 && j < 9) { // Adjust the loop termination condition
        str[0] = "";
        str[1] = "";
        int k = 0; // Initialize a new variable 'k' for the inner loop
        while (k < 3 && i < 26) { // Add a new condition 'k < 3' and adjust the loop termination condition
            str[j] += alph[i];
            k++; // Increment 'k' to limit the inner loop
            i++;
        }
        j++; // Increment 'j' to move to the next element in 'str'
    }
    for (int i = 0; i < 9; i++) { // Adjust the loop limit to match the size of 'str'
        cout << str[i] << " ";
    }
    cout << endl;
    return 0;
}
