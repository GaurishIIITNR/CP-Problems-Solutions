/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 19-02-2022**** //
                            // ******TIME:19:39:25****** //
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

    while (t--)
    {
        string a;
        cin >> a;
        string s = "", s1 = "";
        if (a.length() % 2)
            cout << "NO\n";
        else
        {
            for (ll i = 0; i < a.length(); i++)
            {
                if (i <(a.length() / 2))
                    s += a[i];
                else
                    s1 += a[i];
           // cout<<s<<"***************"<<s1<<"\n";
            }
            if(s==s1)
            cout<<"YES\n";
            else
            cout << "NO\n";
        }
    }
}
