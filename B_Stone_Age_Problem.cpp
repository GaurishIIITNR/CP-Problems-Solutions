#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define chalo(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define srt(x) sort(x.begin(), x.end())
#define dsrt(x) sort(x.begin(), x.end(), greater<int>())
#define pii pair<ll, ll>
#define vec(v) vector<ll> v
#define ms(st) multiset<ll> st
#define st(s) set<ll> s
#define inmap(mp) map<ll, ll> mp
#define chmap(mp) map<char, ll> mp
const int M = 1e9 + 7;

int main()
{
    int xd, lmao;
    // the solution is written and directed by tony stark
    ll n, q;
    cin >> n >> q;
    vec(v);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    vec(ans);
    bool ok = false;
    int curr = 0;
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int a, b;
            cin >> a >> b;
            int sub = 0;
            if (ok)
            {
                sub = b - curr;
            }
            else
            {
                sub = b - v[a - 1];
            }

            sum += sub;
            ans.push_back(sum);
        }
        else
        {
            int t;
            cin >> t;
            curr = t;
            sum = n * t;
            ans.push_back(sum);
            ok = true;
        }
        // cout<<sum<<'\n';
    }
    for (auto e : ans)
    {
        cout << e << "\n";
    }
    return 0;
}