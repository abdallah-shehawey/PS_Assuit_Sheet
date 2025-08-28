#include <iostream>
using namespace std;

int main()
{
  long int X;
  bool password = false;

  while (!password)
  {
    cin >> X;
    if (X != 1999)
    {
      cout << "Wrong" << endl;
    }
    else
    {
      cout << "Correct";
      password = true;
    }
  }
  return 0;
}