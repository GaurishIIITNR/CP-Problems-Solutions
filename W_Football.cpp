/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 18-02-2022**** //
                            // ******TIME:12:02:17****** //
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
    ll cnt1 = 0, cnt2 = 0;
    bool flag = 1;
    string h, k;
    while (t--)
    {
        string s;
        cin >> s;
        if (flag)
        {
            h = s;
            flag = 0;
        }
        if (h == s)
            cnt1++;
        else
        {
            k = s;
            cnt2++;
        }
    }
    if (cnt1 > cnt2)
        cout << h;
    else
        cout << k;
}
