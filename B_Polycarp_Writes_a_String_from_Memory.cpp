// DATE :10-07-2022
// TIME:20:52:55
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define print(x) cout << x << endl
#define vect(type1, name) vector<type1> name
#define vectp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define fir first
#define sec second
#define full(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626

void solve()
{
    string s;
    cin >> s;
    ll c = 0, j;
    set(char, x){};
    for (ll i = 0; i < s.size(); i++)
    {
        /* code */
        for (j = i; j < s.size() and x.size() <= 3; j++)
        {
            /* code */
            x.insert(s[j]);
            if (x.size() > 3)
                break;
        }
        // cout<<j<<"\n";
        c++;
        i = j - 1;
        x.clear();

        // x.insert(s[i]);
        // if (x.size()==3) {
        //     c++;
        //
    }

    //    if(x.size()==0) print(c);
    //    else print(c+1);
    //    print(x.size());
    print(c);

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
    ll T = 1;
    cin >> T;

    for (ll i = 1; i <= T; i++)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }
}