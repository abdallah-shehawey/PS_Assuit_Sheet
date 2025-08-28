#include <iostream>
using namespace std;

int main ()
{
  int A, B;
  cin >> A >> B;

  if (A > B)
  {
    swap(A, B);
  }

  for (int i = A; i >= 1; i--)
  {
    if ( A % i == 0 && B % i == 0)
    {
      cout << i << endl ;
      break;
    }
  }

  return 0;
}