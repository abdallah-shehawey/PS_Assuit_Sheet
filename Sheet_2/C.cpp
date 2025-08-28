#include <iostream>
using namespace std;

int main()
{
  int N, Even = 0, Odd = 0, Positive = 0, Negative = 0;
  cin >> N;
  long int X;
  for (int i = 1; i <= N; i++)
  {
    cin >> X;

    if (X > 0)
    {
      Positive++;
    }
    else if (X < 0)
    {
      Negative++;
    }
    if (X % 2 == 0)
    {
      Even++;
    }
    else
    {
      Odd++;
    }
  }
  cout << "Even: " << Even << endl;
  cout << "Odd: "  << Odd  << endl;
  cout << "Positive: "<< Positive << endl;
  cout << "Negative: "<< Negative << endl;
  return 0;
}