#include <iostream>
#include <vector>
using namespace std;

vector<int> negativenum(int arr[], int size, int k) {
    int i = 0;
    int j = 0;
    vector<int> temp;
    vector<int> ans;

    while (j < size) {
        if (arr[j] < 0) {
            temp.push_back(arr[j]);
        }

        if (j - i + 1 < k) {
            j++;
        } else if (j - i + 1 == k) { 
            if (temp.empty()) {
                ans.push_back(0);
            } else {
                ans.push_back(temp.front());
                if (arr[i] < 0) {
                    temp.erase(temp.begin());
                }
            }
            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    int arr[8] = {1, -2, 3, -4, 5, -6, -9, 20};
    int size = 8;
    int k = 3;
    vector<int> ans = negativenum(arr, size, k);

    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}
