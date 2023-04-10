#include <iostream>

using namespace std;

int main() {
  int num = 12345;
  int reversedNum = 0;
  while (num > 0) {
    reversedNum = reversedNum * 10 + num % 10;
    num /= 10;
  }
  cout << "Reversed number: " << reversedNum << endl;
  return 0;
}
