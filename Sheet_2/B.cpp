#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  bool x = false;
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    if (i % 2 == 0)
    {
      cout << i << endl;
      x = true ;
    }
  }

  if (!x)
  {
    cout << -1;
  }
  return 0;
}