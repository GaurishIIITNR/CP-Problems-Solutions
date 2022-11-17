// Your worst fear owns this
#include <bits/stdc++.h>
#define ll long long int
#define srv(v) sort(v.begin(), v.end())
#define rrv(s1) sort(s1.begin(), s1.end(), greater<ll>())
#define str string
#define sz size()
#define dv(v) vector<ll> v
#define ds(s) set<ll> s
#define dm(mp) map<ll, ll> mp
#define debug(x) cout << #x << " " << x << endl
#define MOD 1000000007

using namespace std;
int main()
{

    int q, j = 0;
    cin >> q;
    int arr[q];
    while (j < q)
    {
        ll n, m;
        cin >> n >> m;
        ds(s1);

        for (int i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            s1.insert(x);
        }

        if (s1.sz == n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

        j++;
    }
    return 0;
}