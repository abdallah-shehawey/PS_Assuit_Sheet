#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  long double a, k, n;

  cin >> n >> k >> a;

  long long x = (k * n) / a;
  long double y = (k * n) / a;
  long double z = y - x;

  if (z > 0)
  {
    cout << "double" << endl;
  }
  else if (y > 2147483647)
  {
    cout << "long long" << endl;
  }
  else
  {
    cout << "int" << endl;
  }

  return 0;
}
