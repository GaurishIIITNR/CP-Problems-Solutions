#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void p(ll n, ll m, ll o)
{
    ll a[n][n];
    for (int i = 0; i < n; i = i + 1)
    {
        for (int j = 0; j < n; j = j + 1)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i = i + 1)
        swap(a[m - 1][i], a[o - 1][i]);
    for (int i = 0; i < n; i = i + 1)
        swap(a[i][m - 1], a[i][o - 1]);
     for (int i = 0; i < n; i = i + 1)
      {for (int j = 0; j < n; j = j + 1)
      {cout<< a[i][j]<<" ";
      }
      cout<<"\n";
      }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
   // cin >> t;

    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        p(a,b,c);
    }
}
