#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  long long int e , m, b, res = 0;
  cin >> e >> m >> b;

  long long mn = min(e, min(m,b));

  res += mn;

  e -= mn;
  m -= mn;
  b -= mn;

  mn = min (e/2, b);
  res += mn;

  cout << res << endl;

  return 0;
}