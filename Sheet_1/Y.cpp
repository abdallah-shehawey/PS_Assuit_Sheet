#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  unsigned long long int A, B, C, D;

  cin >> A >> B >> C >> D;

  A = (A * B) % 100;
  A = (A * C) % 100;
  A = (A * D) % 100;
  if ( A < 10)
  {
    cout << "0" << A;
  }
  else
  {
    cout << A;
  }

  return 0;
}