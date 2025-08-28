#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int N;
  cin >> N;

  int dig_0 = 0, dig_1 = 0;

  dig_0 = N % 10;
  dig_1 = N / 10;

  if (dig_0 % dig_1 == 0 || dig_1 % dig_0 == 0)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}