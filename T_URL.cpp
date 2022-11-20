/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 16-02-2022**** //
                            // ******TIME:12:49:59****** //
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
        string s;
        cin >> s;
        bool flag = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '?' && flag == 0)
                flag = 1;
            else if (flag)
            {
                if (s[i] == '=')
                    cout << ": ";
                else if (s[i] == '&')
                    cout << "\n";
                else
                    cout << s[i];
            }
        }
    }
}
