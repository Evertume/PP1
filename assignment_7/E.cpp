#include <iostream>
using namespace std;

int main() {
  int n, a;
  cin >> n;
  a = n;

  if (a > 0) {
    while (a % 2 == 0) {
      a = a / 2;
    }
    if (a == 1) {
      cout << "Yes";
    } else {
      cout << "No";
    }
  } 
  return 0;
}