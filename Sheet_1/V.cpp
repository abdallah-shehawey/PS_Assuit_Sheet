#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int A,B;
  char S;

  cin >> A >> S >> B;

  if (S == '=')
  {
    if (A == B)
    {
      cout << "Right";
    }
    else
    {
      cout << "Wrong";
    }
  }
  else if (S == '<')
  {
    if (A < B)
    {
      cout << "Right";
    }
    else
    {
      cout << "Wrong";
    }
  }
  else if (S == '>')
  {
    if (A > B)
    {
      cout << "Right";
    }
    else
    {
      cout << "Wrong";
    }
  }
  return 0;
}