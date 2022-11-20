/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 18-02-2022**** //
                            // ******TIME:14:58:15****** //
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
        ll a, b;
        cin >> a >> b;
        if(a==1&&b==10)
        cout<<-1;
        else if (b == 10)
        {
            for (ll i = 0; i < a - 1; i++)
                cout << 1;
            cout << 0;
        }
        else
        {
            for (ll i = 0; i <= a - 1; i++)
                cout << b;
        }
    }
}
