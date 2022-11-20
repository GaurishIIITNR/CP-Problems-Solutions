/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 16-02-2022**** //
                            // ******TIME:23:41:50****** //
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
  // cin>>t;

  while (t--)
  {
    ll a;
    cin >> a;
    string s = to_string(a);
    string k = s;
    ll mx = INT_MIN;
    if (a < 0)
    {
      string s = to_string(abs(a));
      for (ll i = 0; i < s.length(); i++)
      {
        int d = (int)(s[i] - '0');
        if (d > mx)
          mx = d;
      }
      bool flag = 0;
      string x="";
      for (ll i = s.length()-1; i >=0; i--)
      {
        int d = (int)(s[i] - '0');
        if (d == mx && flag == 0)
          flag = 1;
        else
          x=s[i]+x;
      }
      if(stoi("-"+x)==-0)
      cout<<0;
      else
      cout<<stoi("-"+x);
    }
    else
      cout << a;
  }
}
