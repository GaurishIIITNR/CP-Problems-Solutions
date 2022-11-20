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
        ll a, b;
        cin >> a >> b;
        vector<ll> arr(a + 1, 0);
        vector<ll> sum(a + 1, 0);
        ll sm = 0;
        for (int i = 1; i <=a; i++)

        {
            cin >> arr[i];
            sm += arr[i];
            sum[i] = sm;
             //cout<<sum[i]<<" ";
        }

        for (int i = 1; i <= b; i++)
        {
            ll c, d;
            cin >> c >> d;
          
                cout << (sum[d] - sum[c - 1]) << "\n";
        }
    }
}
