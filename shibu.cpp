#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> vec(v);
    sort(vec.begin(), vec.end());

    for (int i = n - 1; i >= 1; i -= 2)
    {
        if (v[i] < v[i - 1])
        {
            swap(v[i], v[i - 1]);
        }
    }

    if (v == vec)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t{1};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}