//🚩HHM🚩
// DATE: 22-05-2022
// TIME:16:33:03

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define debv(v)           \
    cout << #v << ": ";   \
    for (auto x : v)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
//#define     mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void hhm()
{
    ll i, j, k;
    ll n;
    cin >> n;
    ll c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    string s;
    cin >> s;
    for (auto x : s)
    {
        if (x >= 65 && x <= 90)
            c2++;
        if (x >= 97 && x <= 122)
            c3++;
        if (x >= 48 && x <= 57)
            c4++;
        if (x == '#' || x == '@' || x == '*' || x == '&')
            c5++;
    }
    if (c2 == 0)
        s += 'A';
    if (c3 == 0)
        s += 'a';
    if (c4 == 0)
        s += '0';
    if (c5 == 0)
        s += '@';
    if(s.length()<7){
        ll k=s.length();
        for(i=0;i<(7-k);i++){
            s+='A';
        }
    }
 cout<<s<<"\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    for(ll i=1;i<=t;i++)
    {
       cout<<"Case #"<<i<<": ";
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
