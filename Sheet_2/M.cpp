#include <iostream>

using namespace std;

int main()
{
  int A, B , C = -1;

  cin >> A >> B;

  for (int i = A; i <= B; i++)
  {
    int out = 0 , x = i;
    while (x)
    {
      if (x % 10 != 4 && x % 10 != 7)
      {
        out++;
      }
      x = x / 10;
    }
    if (out == 0)
    {
      cout << i << " ";
      C++;
    }
  }
  if (C == -1)
  {
    cout << -1 << endl;
  }
  return 0;
}