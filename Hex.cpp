/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 15-02-2022**** //
                            // ******TIME:22:42:14****** //
========================================================================================
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
//  bool check(ll i,ll j){
//      if(arr[i][0]=='B')
//      {

//      }
//  }
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;

    for (ll l = 1; l <= t; l++)
    {
        cout << "Case #" << l << ": ";
        ll a;
        cin >> a;
        char arr[a][a];
        ll rcnt = 0, bcnt = 0, cntb = 0, cntr = 0;
        for (ll i = 0; i < a; i++)
        {
            ll flag = 1;
            for (ll j = 0; j < a; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'R')
                    rcnt++;
                else if (arr[i][j] == 'B')
                    bcnt++;
                if (arr[i][j] != 'B')
                    flag = 2;
            }
            if (flag == 1)
                cntb++;
        }
        for (ll i = 0; i < a; i++)
        {
            ll flag = 1;
            for (ll j = 0; j < a; j++)
            {
                if (arr[j][i] != 'R')
                    flag = 2;
            }
            if (flag == 1)
                cntr++;
        }
        if (abs(rcnt - bcnt) > 1)
            cout << "Impossible\n";
        else if (cntb + cntr == 0)
            cout << "Nobody wins\n";
        else if (cntr + cntb > 1)
            cout << "Impossible\n";
        else if (cntr + cntb == 1)
        {
            if (cntr == 1)
                cout << "Red wins\n";
            else
                cout << "Blue wins\n";
        }
    }
}
