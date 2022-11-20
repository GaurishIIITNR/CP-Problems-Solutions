    /*
    ========================================================================================
                                // ****हर हर महादेव🙏🙏***** //
                                // ***AUTHOR: GAURISH OJHA** //
                                // *****DATE: 13-02-2022**** //
                                // ******TIME:15:13:01****** //
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
            ll a;
            cin >> a;
            ll b = sqrt(a);
            if (b * b != a)
                cout << "NO\n";
            else
            {
                if (b == 1)
                    cout << "NO\n";
                else
                {
                    bool flag = 1;
                    for (ll i = 2; i * i <= b; i++)
                    {
                        if (b % i == 0)
                        {
                            flag = 0;
                            cout << "NO\n";
                            break;
                        }
                    }
                    if (flag)
                        cout << "YES\n";
                }
            }
        }
    }
