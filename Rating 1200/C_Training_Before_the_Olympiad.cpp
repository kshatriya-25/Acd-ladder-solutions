/*OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t-- > 0) {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> result(n);

    int sum = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int k = 0; k < n; k++) {
      sum += a[k];
      if (a[k] % 2 != 0) {
        odd_count++;
      }

      int remainder = odd_count % 3;
      if (remainder == 0) {
        result[k] = sum - (odd_count / 3);
      } else if (remainder == 1) {
        if (k == 0) {
          result[k] = a[k];
        } else {
          result[k] = sum - (odd_count / 3) - 1;
        }
      } else {  // remainder == 2
        result[k] = sum - (odd_count / 3);
      }
    }

    for (int x : result) {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}
