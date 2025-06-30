#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int A, B, C;
  char S, Q;

  cin >> A >> S >> B >> Q >> C;

  if (S == '+')
  {
    if (A + B == C)
    {
      cout << "Yes";
    }
    else
    {
      cout << A + B;
    }
  }
  else if (S == '-')
  {
    if (A - B == C)
    {
      cout << "Yes";
    }
    else
    {
      cout << A - B;
    }
  }
  else if (S == '*')
  {
    if (A * B == C)
    {
      cout << "Yes";
    }
    else
    {
      cout << A * B;
    }
  }

  return 0;
}