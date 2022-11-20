/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 18-02-2022**** //
                            // ******TIME:13:49:09****** //
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
    ll cnt = 1,x,y;
    while (t--)
    {   ll a;
        cin>>a;
        if (a % 2 == 0)
            cout << a / 2<<"\n";
        else
        {
            if (cnt % 2)
            {cout<<a/2<<"\n";
            x=a;
            y=a/2;}
            else
            {
              cout<<((x+a)/2)-y<<"\n";
            }
            cnt++;
        }
    }
}
