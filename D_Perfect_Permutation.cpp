/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
========================================================================================
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  //cin >> t;

  while (t--)
  {
    ll a;
    cin >> a;
    vector<ll> v(a);
    if (a%2)
      cout << -1 << "\n";
    else
    {
      for (ll i = 0; i < a; i++)
        v[i] = i + 1;
     for (ll i = 0; i < a-1; i+=2)
      {
        swap(v[i],v[i+1]);
      }
      for (ll i = 0; i < a; i++)
      cout<<v[i]<<" ";
    }
    
  }
}
