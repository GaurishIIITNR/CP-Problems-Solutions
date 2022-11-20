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
        vector<ll> v(a);
        for (int i = 0; i < a; i++)
            cin >> v[i];
        ll cnt = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; i + j < a; j++)
            {
                int flag = 1;
                for (int k = j; k < i + j; k++)
                {
                    if (v[k] > v[k + 1] && (k+1)<a)
                    {
                        flag = 2;
                        break;
                    }
                }
                if (flag == 1)
                    cnt += 1;
            }
        }
        cout<<cnt<<"\n";
    }
}
