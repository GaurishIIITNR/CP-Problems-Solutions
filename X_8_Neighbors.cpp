/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 23-02-2022**** //
                            // ******TIME:20:27:17****** //
========================================================================================
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
  ll a, b;
  cin >> a >> b;
  ll i, j;
  char arr[a][b];
  foi(i, 0, a, 1)
          foi(j, 0, b, 1)
              cin >>
      arr[i][j];
  ll d, c;
  cin >> d >> c;
  c = c - 1;
  d = d - 1;
  bool flag = 1;
  if (d - 1 >= 0)
  {
    if (arr[d - 1][c] == '.')
      flag = 0;
  }
  if (d + 1 < a)
  {
    if (arr[d + 1][c] == '.')
      flag = 0;
  }
  if (c - 1 >= 0)
  {
    if (arr[d][c - 1] == '.')
      flag = 0;
  }
  if (c + 1 < b)
  {
    if (arr[d][c + 1] == '.')
      flag = 0;
  }
  if (d - 1 >= 0 && c - 1 >= 0)
  {
    if (arr[d - 1][c - 1] == '.')
      flag = 0;
  }
  if (d + 1 < a && c + 1 < b)
  {
    if (arr[d + 1][c + 1] == '.')
      flag = 0;
  }
  if (d + 1 < a && c - 1 >= 0)
  {
    if (arr[d + 1][c - 1] == '.')
      flag = 0;
  }
  if (d - 1 >= 0 && c + 1 < b)
  {
    if (arr[d - 1][c + 1] == '.')
      flag = 0;
  }
  if (flag)
    cout << "yes";
  else
    cout << "no";

  return;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  // cin>>t;

  while (t--)
  {
    gaurish();
  }
}
