
// DATE: 02-07-2022
// TIME:01:00:41

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
void HHM()
{
    ll i, j;
    // ll n;
    // cin >> n;

    // set<ll>st;
    // map<ll,ll>mp;
    string s;
    cin >> s;
    // vector<ll>v(n,0);
    string mn = "", mx = "";
    if (s.length() % 2 == 0)
    {
        for (i = 0; i < (s.length() + 1) / 2; i++)
            mn = '4' + mn + '7';
        for (i = 0; i < (s.length() + 1) / 2; i++)
            mx = '7' + mx + '4';
    }
    string k = "";
    if (s.length() % 2)
    {
        for (i = 0; i < (s.length() + 1) / 2; i++)
            k = '4' + k + '7';
        cout << k << "\n";
        return;
    }
    if (s.length() % 2 == 0 && s <= mn)
    {
        cout << mn << "\n";
        return;
    }
    if (s.length() % 2 == 0 && s > mx)
    {
        cout << '4' + mn + '7' << "\n";
        return;
    }
    ll fr = s.length() / 2, svn = s.length() / 2;
    bool flag = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] < '4' && flag == 0)
        {
            k += '4';
            fr--;
            flag = 1;
        }
        else if (s[i] == '4' && flag == 0 && fr > 0)
        {
            k += '4';
            fr--;
        }
        else if (s[i] < '7' && flag == 0)
        {
            k += '7';
            svn--;
            flag = 1;
        }
        else if (s[i] == '7' && flag == 0 && svn > 0)
        {
            k += '7';
            svn--;
        }
        else if (s[i] >= 7 && flag == 0)
        {
            for (j = i - 1; j >= 0; j--)
            {
                if (s[j] == '4')
                {
                    k[j] = '7';
                    // k += '4';
                    flag = 1;
                    svn--;
                    fr++;
                    break;
                }
                if (k[j] == '4')
                {
                    fr++;
                    k.erase(k.begin() + j);
                }
                else
                {
                    svn++;
                    k.erase(k.begin() + j);
                }
            }
        }
        if (flag == 1)
        {
            for (j = 0; j < fr; j++)
                k += '4';
            for (j = 0; j < svn; j++)
                k += '7';
            cout << k << "\n";
            return;
        }
    }
    if (!flag)
    {
        cout << k << "\n";
        return;
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    //  ll tt=1;
    while (t--)
    {
        // cout << "Case #" << tt << ": ";
        HHM();
        // tt++;;
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);