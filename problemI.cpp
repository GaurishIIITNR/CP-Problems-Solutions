// हर हर महादेव
#define F first
#define S second
#define dbl double
using namespace std;
#define pb push_back
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
string winner(string a, string b)
{
    if ((a == "rock" && b == "scissors") || (b == "rock" && a == "scissors"))
        return "rock";
    if ((a == "rock" && b == "paper") || (b == "rock" && a == "paper"))
        return "paper";
    if ((a == "paper" && b == "scissors") || (a == "scissors" && b == "paper"))
        return "scissors";
    return "";
}
void HHM()
{
    string a, b, c;
    cin >> a >> b >> c;
    ll c1 = 0, c2 = 0, c3 = 0;
    if (a == winner(a, b))
        c1++;
    if (a == winner(a, c))
        c1++;
    if (b == winner(a, b))
        c2++;
    if (b == winner(b, c))
        c2++;
    if (c == winner(b, c))
        c3++;
    if (c == winner(a, c))
        c3++;
    if (c1 == 2 && c2 != 2 && c3 != 2)
    {
        cout << "F";
        return;
    }
    if (c1 != 2 && c2 == 2 && c3 != 2)
    {
        cout << "M";
        return;
    }
    if (c1 != 2 && c2 != 2 && c3 == 2)
    {
        cout << "S";
        return;
    }
    cout << "?";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
