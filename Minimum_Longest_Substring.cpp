// DATE: 28-03-2022
// TIME:09:22:12
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j, k;
    ll n;
    string s;
    cin >> n >> s;
    ll cnt0 = 0, cnt1 = 0;
    for (auto x : s)
    {
        if (x == '0')
            cnt0++;
        else
            cnt1++;
    }
    string s1 = "", s2 = "";
    ll c = 0;
    if (cnt0 == cnt1)
    {
        for (i = 0; i < n; i++)
        {
            if (i % 2)
            {
                s1 = s1 + '0';
                s2 = s2 + '1';
            }
            else
            {
                s2 = s2 + '0';
                s1 = s1 + '1';
            }
        }
    }

    else if (cnt1 > cnt0)
    {
        string temp = "";
        for (ll i = 0; i < (cnt1 / (cnt0 + 1)); i++)
            temp = temp + '1';
        // cout << temp << "\n";
        for (ll i = 1; i <= (2 * cnt0) + 1; i++)
        {
            if (i % 2)
            {
                c++;
                if (c <= cnt1 % (cnt0 + 1))
                {
                    s1 = s1 + temp + '1';
                }
                else
                {
                    s1 = s1 + temp;
                }
            }
            else
                s1 = s1 + '0';
        }
        c = 1;
        for (ll i = 1; i <= (2 * cnt0); i++)
        {
            if (i % 2 == 0)
            {
                c++;
                if (c <= cnt1 % (cnt0 + 1))
                {
                    s2 = s2 + temp + '1';
                }
                else
                {
                    s2 = s2 + temp;
                }
            }
            else
                s2 = s2 + '0';
        }
        if (cnt1 % (cnt0 + 1) >= 1)
            s2 = s2 + temp + '1';
        else
            s2 = s2 + temp;
    }

    else if (cnt1 < cnt0)
    {
        swap(cnt1, cnt0);
        string temp = "";
        for (ll i = 0; i < (cnt1 / (cnt0 + 1)); i++)
            temp = temp + '0';
        // cout << temp << "\n";
        for (ll i = 1; i <= (2 * cnt0) + 1; i++)
        {
            if (i % 2)
            {
                c++;
                if (c <= cnt1 % (cnt0 + 1))
                {
                    s1 = s1 + temp + '0';
                }
                else
                {
                    s1 = s1 + temp;
                }
            }
            else
                s1 = s1 + '1';
        }
        c = 1;
        for (ll i = 1; i <= (2 * cnt0); i++)
        {
            if (i % 2 == 0)
            {
                c++;
                if (c <= cnt1 % (cnt0 + 1))
                {
                    s2 = s2 + temp + '0';
                }
                else
                {
                    s2 = s2 + temp;
                }
            }
            else
                s2 = s2 + '1';
        }
        if (cnt1 % (cnt0 + 1) >= 1)
            s2 = s2 + temp + '0';
        else
            s2 = s2 + temp;
    }

    cout << s1 << "\n"
         << s2 << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    ll t = 1;
    cin >> t;

    while (t--)
    {
        gaurish();
    }
}
