/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 22-02-2022**** //
                            // ******TIME:12:04:38****** //
========================================================================================
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll n;
    cin >> n;
     // 1 -2
    // 7 -3
    // 4 -4
    // 6 -5
    // 9 -6
    // 8 -7
 

    string s = "";
    while (n > 0)
    {
        if (n >= 6 && n-6>1)
        {
            s += "9";
            n -= 6;
        }
        else if( n>=7 && n-7!=1){
            s +='8';
            n -=7;
        }
        else if (n >= 3 && n -3!=1)
        {
            s += '7';
            n -= 3;
        }
        else if (n >= 5 && n-5 !=1)
        {
            s += '6';
            n -= 5;
        }

        else if (n >= 4 && n-4 !=1)
        {
            s += "4";
            n -= 4;
        }
        else if (n >= 2 && n-2 !=1)
        {
            s += '1';
            n -= 2;
        }
    }
    cout << s << endl;

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;

    while (t--)
    {
        gaurish();
    }
}
