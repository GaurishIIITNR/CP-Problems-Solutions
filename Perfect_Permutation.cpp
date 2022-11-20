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
  cin >> t;

  while (t--)
  {
    ll a, b;
    cin >> a >> b;
    vector<ll> v(a);
    if (a < b)
      cout << -1 << "\n";
    else if(a==b)
    {
      for (ll i = 0; i < a; i++)
      cout << i+1 << " ";
       cout<<"\n";

    }
    else
    {
      for (ll i = 0; i < a; i++)
        v[i] = i + 1;
      swap(v[0], v[a - 1]);
      for (ll k = b; k < a; k += 2)
      {
        if (k != a - 1)
          swap(v[k], v[k + 1]);
      }
      for (ll i = 0; i < a; i++)
      cout<<v[i]<<" ";
      cout<<"\n";
    }
    
  }
}
