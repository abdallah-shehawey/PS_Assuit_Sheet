#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
  long long int X;
  cin >> X;
  int years, months, days;

  years = X / 365;
  X %= 365;
  months = X / 30;
  X %= 30;
  days = X;

  cout << years << " years" << endl;
  cout << months << " months" << endl;
  cout << days << " days" << endl;
  return 0;
}