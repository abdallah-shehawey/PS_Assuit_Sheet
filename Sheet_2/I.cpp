#include <bits/stdc++.h>

using namespace std;


int main()
{
  long int N, X = 0;
  cin >> N;
  long int Z = N;
  while (N != 0)
  {
    X = (X * 10) + (N % 10);
    N /= 10;
  }

  cout << X << endl;

  if (X == Z)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}