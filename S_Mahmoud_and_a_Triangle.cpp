/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 18-02-2022**** //
                            // ******TIME:15:13:39****** //
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
    vector<ll> v(t);
    ll i = 0;
    while (i < t)
    {
        cin >> v[i];
        i++;
    }
    sort(v.begin(), v.end());
    char flag = '1';
    for (ll i = 0; i < t - 2; i++)
    {
       double s = (v[i] + v[i + 1] + v[i + 2]) / 2.0;
        double area = (double)sqrt(s * (s - v[i]) * (s - v[i + 1]) * (s - v[i + 2]));
        if (v[i] + v[i + 1] >= v[i + 2] && area > 0)
        {  //cout << v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<"\n";
           //printf("%.7f",area);
            cout << "YES\n";
            flag = '2';
            break;
        }
    }
    if (flag == '1')
        cout << "NO\n";
}
