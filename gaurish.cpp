/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 24-02-2022**** //
                            // ******TIME:23:38:26****** //
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
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define pb push_back
//#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.141592653589793238462

struct contrb
{
  string name;
  vector<pair<string, int>> sl;
};

struct project
{
  string name;
  int day, score, daybefore;
  vector<pair<string, int>> sl;
};

void gaurish()
{
  int c, p;
  cin >> c >> p;

  vector<contrb> contri;
  vector<project> pro;

  string str, bb;
  int aa, qq;
  for (int i = 0; i < c; i++)
  {
    struct contrb con;
    cin >> str;
    con.name = str;
    cin >> qq;
    vector<pair<string, int>> vv;
    for (int i = 0; i < qq; i++)
    {
      cin >> bb >> aa;
      vv.push_back({bb, aa});
    }

    con.sl = vv;

    contri.push_back(con);
  }

  string ww;
  int gg, hh, ii, jj;
  for (int i = 0; i < p; i++)
  {
    struct project ppp;
    cin >> ww >> gg >> hh >> ii >> jj;
    ppp.name = ww;
    ppp.day = gg;
    ppp.score = hh;
    ppp.daybefore = ii;

    vector<pair<string, int>> vy;
    for (int i = 0; i < jj; i++)
    {
      cin >> ww >> gg;
      vy.push_back({ww, gg});
    }
    ppp.sl = vy;
    pro.push_back(ppp);
  }

  ////Debugger
  // for(int i=0;i<p;i++){
  //     cout<<pro[i].name<<" "<<pro[i].day<<" "<<pro[i].score<<" "<<pro[i].daybefore<<endl;
  //     for(int j=0;j<pro[i].sl.size();j++) {
  //         cout<<pro[i].sl[j].first<<" "<<pro[i].sl[j].second<<" ";
  // }
  // cout<<endl;
  // }

  for (int i = 0; i < pro.size(); i++)
  {
  }

  return;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // #ifndef ONLINE_JUDGE
  //          freopen("in.txt", "r", stdin);
  //          freopen("output.txt", "w", stdout);
  // #endif
  ll t = 1;
  // cin >> t;

  while (t--)
  {
    gaurish();
  }
}

/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 25-02-2022**** //
                            // ******TIME:13:37:27****** //
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
  ll a;
  cin >> a;
  vec(ll, input);
  st(ll, sat);
  while (a--)
  {
    ll b;
    cin >> b;
    input.pb(b);
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
  // cin>>t;

  while (t--)
  {
    gaurish();
  }
}

vector<pair<int, int>> v;
int x, y;
for (int i = 0; i < n; i++)
{
  cin >> x >> y;
  v.push_back({x, y});
}

int initX = v[0].first, initY = v[0].second;
v.erase(v.begin());

for (int i = 0; i < s.length(); i++)
{
  if (s[i] == 'A')
  {
    for (int i = 0; i < v.size(); i++)
    {
      if (initX < v[i].first && (v[i].first - initX) == (v[i].second - initY))
      {
        initX = v[i].first;
        initY = v[i].second;
        v.erase(v.begin() + i);
        break;
      }
    }
  }
  if (s[i] == 'B')
  {
    for (int i = 0; i < v.size(); i++)
    {
      if (initX < v[i].first && (v[i].first - initX) == -(v[i].second - initY))
      {
        initX = v[i].first;
        initY = v[i].second;
        v.erase(v.begin() + i);
        break;
      }
    }
  }
  if (s[i] == 'C')
  {
    for (int i = 0; i < v.size(); i++)
    {
      if (initX > v[i].first && -(v[i].first - initX) == (v[i].second - initY))
      {
        initX = v[i].first;
        initY = v[i].second;
        v.erase(v.begin() + i);
        break;
      }
    }
  }
  if (s[i] == 'D')
  {
    for (int i = 0; i < v.size(); i++)
    {
      if (initX > v[i].first && (v[i].first - initX) == (v[i].second - initY))
      {
        initX = v[i].first;
        initY = v[i].second;
        v.erase(v.begin() + i);
        break;
      }
    }
  }
}

cout << initX << " " << initY << "\n";