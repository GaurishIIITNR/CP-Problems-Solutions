//🚩HHM🚩
// DATE: 28-06-2022
// TIME:00:47:25

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
bool checkVowel(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return 1;
    return 0;
}

vector<string> converter(string &s)
{
    vector<string> v;
    for (ll i = 0; i < s.length(); i++)
    {
        for (ll j = i + 1; j <= s.length(); j++)
        {
            string q = s.substr(i, j);
            if (q.length() > 4)
                v.pb(q);
        }
    }
    return v;
}
void HHM()
{
    ll i, j, k;
    // ll n;
    // cin >> n;
    string m;
    cin >> m;
    vector<string> v1 = converter(m);
    // vout(v);
    for (auto s : v1)
    {
        ll low = 0, high = s.length() - 1;
        string s1 = "", s2 = "";
        ll v1 = 0, v2 = 0;
        ll flag = 0;
        while (low < high)
        {
            s1 += s[low];
            s2 = s[high] + s2;
            if (checkVowel(s[low]))
                v1++;
            if (checkVowel(s[high]))
                v2++;
            if (s1 == s2 && v1 > 1 && v2 > 1)
            {
                flag = 1;
                break;
            }
            low++;
            high--;
        }
        if (flag == 0)
            continue;
        else
        {
            for (i = low + 1; i < high; i++)
            {
                if (checkVowel(s[i]))
                {
                    flag = 2;
                    break;
                }
            }
        }
        if (flag == 1)
            continue;
        else
        {
            // cout << s << "\n";
            cout << "Spell!\n";
            return;
        }

        // set<ll>st;
        // map<ll,ll>mp;
        // string s;cin>>s;
        // vector<ll>v(n,0);
    }
    cout << "Nothing.\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    ll tt = 1;
    while (t--)
    {
        cout << "Case #" << tt << ": ";
        HHM();
        tt++;
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
