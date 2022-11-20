/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 17-02-2022**** //
                            // ******TIME:13:11:09****** //
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
    ll a, b;
    cin >> a >> b;
    ll grid[a][b];
    ll cnt=0;
    while (t--)
    {
        for (ll i = 0; i < a; i++)
        {   bool flag=1;
            for (ll j = 0; j < b; j++)
            {
                cin >> grid[i][j];
                if(grid[i][j]=='S')
                flag=2;
            }
            if(flag==1)
            cnt+=b;
        }
          for (ll j = 0; j < b; j++)
          {   
             for (ll i = 0; i < a; i++)
             {
                 
             } 
          }
    }
}
