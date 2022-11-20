/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 13-02-2022**** //
                            // ******TIME:16:18:16****** //
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
        char a;
        cin >> a;
        string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
        string b;
        cin >> b;

        string k = "";
        if (a == 'R')
        {
            for (ll i = 0; i < b.length(); i++)
            {
                for (ll j = 0; j < 30; j++)
                    if (s[j] == b[i])
                    {
                        b[i] = s[j - 1];
                    }
            }
        }
        else
        {
            for (ll i = 0; i < b.length(); i++)
            {
                for (ll j = 0; j < 30; j++)
                    if (b[i] == s[j])
                    {
                        k += s[j + 1];
                    }
            }
        }
        if (a == 'L')
            b = k;
        cout << b;
    }
}
