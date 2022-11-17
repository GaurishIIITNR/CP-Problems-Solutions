// DATE: 29-03-2022
// TIME:23:47:46
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
//#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vec(ll, v)(n);
    vec(ll, v1)(n);
    mpp(ll, char, mppl);
    mpp(ll, char, mpn);
    bool f1 = 0, f2 = 0;
    foi(i, 0, n, 1)
    {
        cin >>
            v[i];
        if (v[i] > 0 && f1 == 0)
        {
            f1 = 1;
            mppl[i] = '0';
        }
        else if (f1 == 0)
            mppl[i] = '0';
        else if (f1 == 1)
            mppl[i] = '+';

        if (v[i] < 0 && f2 == 0)
        {
            f2 = 1;
            mpn[i] = '0';
        }
        else if (f2 == 0)
            mpn[i] = '0';
        else if (f2 == 1)
            mpn[i] = '-';
    }
    foi(i, 0, n, 1)
            cin >>
        v1[i];

    // for (auto x : mppl)
    //     cout << x.second << " ";
    // cout << endl;
    // for (auto x : mpn)
    //     cout << x.second << " ";
    // cout << endl;

    if (v[0] != v1[0])
    {
        cout << "NO\n";
        return;
    }
    foi(i, 0, n, 1)
    {
        if (v[i] > 0 && v1[i] == 0)
        {
            if (mpn[i] == '-')
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }
        if (v[i] == 0 && v1[i] > 0)
        {
            if (mppl[i] == '+')
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }

        if (v[i] < 0 && v1[i] == 0)
        {
            if (mppl[i] == '+')
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }

        if (v[i] == 0 && v1[i] < 0)
        {
            if (mpn[i] == '-')
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }

        if (v[i] > 0 && v1[i] < 0)
        {
            if (mpn[i] == '-')
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }
        if (v[i] < 0 && v1[i] > 0)
        {
            if (mppl[i] == '+')
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }

        if (v[i] > 0 && v1[i] > 0 && v[i] < v1[i])
        {
            if (mppl[i] == '+')
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }
        if (v[i] > 0 && v1[i] > 0 && v[i] > v1[i])
        {
            if (mpn[i] == '-')
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }

        if (v[i] < 0 && v1[i] < 0 && v[i] > v1[i])
        {
            if (mpn[i] == '-')
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }

        if (v[i] < 0 && v1[i] < 0 && v[i] < v1[i])
        {
            if (mppl[i] == '+')
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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