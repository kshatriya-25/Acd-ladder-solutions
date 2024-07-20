/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

#define int long long

using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n;
    cin >> n;
    vector<int> k(n);
    for (int &x : k) {
      cin >> x;
    }
    int z = 1;
    for (int &i : k) {
      z = lcm(z, i);
    }
    int suma = 0;
    for (int i = 0; i < n; i++) {
      suma += z / k[i];
    }
    if (suma < z) {
      for (int &i : k) cout << z / i << " ";
      cout << "\n";
    } else {
      cout << -1 << "\n";
    }
  }
}
