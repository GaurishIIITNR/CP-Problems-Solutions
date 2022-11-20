/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 16-02-2022**** //
                            // ******TIME:23:16:37****** //
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
        string a, b;
        cin >> a >> b;
        //cout<<a.length()<<"\n";
        ll cnt = 0;
        if (a == b)
            cout << -1;
        else
        {
            bool flag = 0;
            for (int i = 0; i < a.length(); i++)
            {
                for (int j = 0; j < b.length(); j++)
                {
                    if (a[i] == b[j])
                    {
                        cnt++;
                        b[j] = -1;
                    }
                    else
                        b[j] = -1;
                    if (j == b.length() - 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            cout << (max(a.length(), b.length()) - cnt);
        }
    }
}
