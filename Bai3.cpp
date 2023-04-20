#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n <= 0) {
    cout << 0;
    return 0;
  }

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int count = 1;
  int maxLength = 1;

  for (int i = 1; i < n; i++) {
    if (a[i] > a[i - 1]) {
      count++;
      if (count > maxLength) {
        maxLength = count;
      }
    } else {
      count = 1;
    }
  }

  cout << maxLength;

  return 0;
}
