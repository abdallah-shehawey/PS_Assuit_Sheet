#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  double n;
  cin >> n;
  if (int(n) == n)
  {
    cout << "int " << n << endl;
  }
  else
  {
    cout << "float " << int(n) << " "<< n-int(n) << endl;
  }
  return 0;
}