/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 13-02-2022**** //
                            // ******TIME:09:38:30****** //
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
        ll d = a % 4;
        if (a == 0)
            cout << 1;
        else
        {
            if (d == 1)
                cout << 8;
            else if (d == 2)
                cout << 4;
            else if (d == 3)
                cout << 2;
            else 
                cout << 6;
        }
    }
}
