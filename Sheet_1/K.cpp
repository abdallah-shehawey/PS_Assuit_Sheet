
#include <iostream>
    using namespace std;

int main()
{
  long long int A, B, C, Big, Small;
  cin >> A >> B >> C;

  if (A > B)
  {
    if (A > C)
    {
      Big = A;
      if (C > B)
      {
        Small = B;
      }
      else
      {
        Small = C;
      }
    }
    else
    {
      Big = C;
      Small = B;
    }
  }
  else
  {
    if (B > C)
    {
      Big = B;
      if (C > A)
      {
        Small = A;
      }
      else
      {
        Small = C;
      }
    }
    else
    {
      Big = C;
      Small = A;
    }
  }

  cout << Small << " " << Big;
  return 0;
}