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

ll pw(ll a, ll b)
{
    ll curr = b;
    for (int i = 1; i < a; i++)
    {
        curr *= b;
    }
    return curr;
}
void stank()
{
    int n;
    cin >> n;
    vec(v);
    inmap(mp);
    st(s);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
        s.insert(x);
    }
    int k = s.size();
    ll ans = n - k;
    cout << ans << '\n';
}

int main()
{
    int xd, lmao;
    // the solution is written and directed by tony stark
    //  vec(v);
    //  for(int i=0;i<6;i++){
    //      v[i]=0;
    //  }
    ll __;
    cin >> __;
    while (__--)
    {
        stank();
    }
    return 0;
}