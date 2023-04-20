#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int count = 0;
  int maxLength = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      count++;
      if (count > maxLength) {
        maxLength = count;
      }
    } else {
      count = 0;
    }
  }

  cout << maxLength;

  return 0;
}
