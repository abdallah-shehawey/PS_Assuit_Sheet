#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  char X;

  cin >> X;

  if (X >= 'a')
  {
    printf("%c", X - 32);
  }
  else
  {
    printf("%c", X + 32);
  }

  return 0;
}