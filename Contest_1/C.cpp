#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  char C;
  cin >> C;

  if ( C == 'z')
  {
    cout << 'a';
  }
  else
  {
    cout << (char)(C + 1);
  }

  return 0;
}