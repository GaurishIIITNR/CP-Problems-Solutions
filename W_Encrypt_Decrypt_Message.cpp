/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 16-02-2022**** //
                            // ******TIME:14:51:47****** //
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
     string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    while (t--)
    {
        char encryp[10000];
        char dicri[10000];
        for (ll i = 0; i < 62; i++)
        {
            encryp[(int)Original[i]] = Key[i];
            dicri[(int)Key[i]] = Original[i];
        }
        ll a;
        cin >> a;
        if (a == 1)
        {
            char c;
            while (cin >> c)
                cout << encryp[(int)c];
        }
        else
        {
            char c;
            while (cin >> c)
                cout << dicri[(int)c];
        }
    }
}
