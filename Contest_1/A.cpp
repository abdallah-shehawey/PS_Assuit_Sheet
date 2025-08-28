#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  double X, P;
  cin >> X >> P;

  double originalPrice = P / (1 - X/100);

  cout << fixed << setprecision(2) << originalPrice << endl;

  return 0;
}