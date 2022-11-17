/*
========================================================================================
                               // ****  ***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 04-03-2022**** //
                            // ******TIME:21:22:08****** //
========================================================================================
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define erase(name, i) name.erase(name.begin() + i)
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
    cin >> n;
    vec(ll, v)(n);
    foi(i, 0, n, 1)
            cin >>
        v[i];
    sort(all(v));
    reverse(all(v));
    ll cntr = 0, cntb = 0;
    ll smr = 0, smb = 0;
    k = n - 1;
    for (i = 0; i < n; i++)
    {
        smr += v[i];
        smb += v[k];
        cntb++;
        cntr++;

        if (n % 2 == 1 && k == i)
        {
            smr -= v[k];
            cntr -= 1; // 8 6 3 2 1
            if (smr > smb && cntr < cntb)
                cout << "YES\n";
            else
                cout << "NO\n";
            break;
        }
        else if (n % 2 == 0 && k == i - 1)
        {
            smr -= v[k];
            cntr -= 1;
            if (smr > smb && cntr < cntb)
                cout << "YES\n";
            else
                cout << "NO\n";
            break;
        }
        else if ((smr-v[i]) > smb && (cntr-1) < cntb)
        {
            cout << "YES\n";
            break;
        }
        // deb(smb);
        // deb(smr);
        // deb(cntr);
        // deb(cntb);
        k--;
    }
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
        // cout << "*************"
        //      << "\n";
    }
}