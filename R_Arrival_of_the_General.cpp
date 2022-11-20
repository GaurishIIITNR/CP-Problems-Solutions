//===================================================================================//
//      हर हर महादेव🙏🙏   //
//    AUTHOR: GAURISH OJHA //
//     DATE: 11-02-2022    //
//      TIME:23:13:52      //
//===================================================================================//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    ll x=t;
    ll mx = INT_MIN;
    ll mn = INT_MAX;
    ll mni, mxi, cnt = 1;
    while (t--)
    {
        ll a;
        cin >> a;
        if (a > mx)
        {
            mx = a;
            mxi = cnt;
        }
        if (a <= mn)
        {
            mn = a;
            mni = cnt;
        }
        cnt++;
    }
    if(mxi<mni)
    cout << (mxi - 1) + (x - mni) << "\n";
    else
    cout << (mxi - 1) + (x - mni-1) << "\n";
}
