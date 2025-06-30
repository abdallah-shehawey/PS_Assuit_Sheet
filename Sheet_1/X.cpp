#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int start, end;

    if (l1 > l2)
      start = l1;
    else
      start = l2;

    if (r1 < r2)
      end = r1;
    else
      end = r2;

    if (start <= end)
    {
      cout << start << " " << end << endl;
    }
    else
    {
      cout << -1 << endl;
    }

    return 0;
}
