/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

struct stock {
  long long extra;
  long long price;
};

bool canMake(stock Burger, stock Sausage, stock Cheese, long long demand,
             long long budget, int ratioB, int ratioS, int ratioC) {
  long long b_deficit = max(0LL, demand * ratioB - Burger.extra);
  long long s_deficit = max(0LL, demand * ratioS - Sausage.extra);
  long long c_deficit = max(0LL, demand * ratioC - Cheese.extra);

  long long cost = (b_deficit * Burger.price) + (s_deficit * Sausage.price) +
                   (c_deficit * Cheese.price);

  return cost <= budget;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  long long nb, ns, nc, pb, ps, pc, budget;
  string recipe;
  cin >> recipe;
  cin >> nb >> ns >> nc >> pb >> ps >> pc >> budget;

  int ratioB = 0, ratioS = 0, ratioC = 0;
  for (char ch : recipe) {
    if (ch == 'B')
      ratioB++;
    else if (ch == 'S')
      ratioS++;
    else if (ch == 'C')
      ratioC++;
  }

  stock Burger = {nb, pb};
  stock Sausage = {ns, ps};
  stock Cheese = {nc, pc};

  long long l = 0, r = 1e13;
  while (l + 1 < r) {
    long long mid = (l + r) / 2;
    if (canMake(Burger, Sausage, Cheese, mid, budget, ratioB, ratioS, ratioC))
      l = mid;
    else
      r = mid;
  }

  cout << l << endl;

  return 0;
}
