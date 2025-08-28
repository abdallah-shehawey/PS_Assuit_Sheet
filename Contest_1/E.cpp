#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int a, b;
  cin >> a >> b;

  if (a - b == 1 || b - a == 1 || ( a == b && a != 0 && b != 0))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
