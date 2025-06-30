#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long int A, B;
  char C;

  cin >> A >> C >> B;
  
  switch (C)
  {
    case '+':
      cout << A + B;
      break;
    case '-':
      cout << A - B;
      break;
    case '*':
      cout << A * B;
      break;
    case '/':
      cout << A / B;
      break;
    default:
      cout << "Invalid operator";
      break;
  }
  return 0;
}