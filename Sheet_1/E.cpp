#include <iostream>

#include <iomanip>
using namespace std;

int main()
{
  double R;
  double area, M_pi = 3.141592653;
  cin >> R;
  area = R * R * M_pi;
  cout << fixed << setprecision(9);
  cout << area;
  return 0;
}