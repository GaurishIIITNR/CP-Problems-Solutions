/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 11-03-2022**** //
                            // ******TIME:20:48:18****** //
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
    ll a, b, i, j, k;
    cin >> a >> b;
    char arr[a][b];
    foi(i, 0, a, 1)
    {
        foi(j, 0, b, 1)
        {
            cin >> arr[i][j];
        }
    }


    foi(i, 0, a, 1)
        foi(j, 0, b, 1)
    {
        ll cnt = 0;
        if (arr[i][j] == '1' && j + 1 < b && arr[i][j + 1] == '1')
        {
            cnt += 1;
        }
        if (arr[i][j] == '1' && j - 1 >= 0 && arr[i][j - 1] == '1')
        {
            cnt += 1;
        }
        if (arr[i][j] == '1' && i + 1 < a && arr[i + 1][j] == '1')
        {
            cnt += 1;
        }
        if (arr[i][j] == '1' && i - 1 >= 0 && arr[i - 1][j] == '1')
        {
            cnt += 1;
        }
        if (cnt >= 3)
        {
            cout << "NO\n";
            return;
        }
        
    }
    cout << "YES\n";
}
// void gaurish()
// {
//     ll i, j, k;
//     ll a, b;
//     cin >> a >> b;
//     ll arr[a][b];
//     foi(i, 0, a, 1)
//             foi(j, 0, 1, b)
//                 cin >>
//         arr[i][j];
//     bool flag = 0;
//     ll doubtl = 0, doubth=0;
//     foi(i, 0, a, 1)
//     {
//          bool flag=0;
//         foi(j, 0, 1, b)
//         {
//             if (arr[i][j] == 1 &&flag == 0)
//             {
//                 flag = 1;
//                 doubtl = i;
//             }
//             if (arr[i][j] == 0 &&flag == 1)
//             {
//                 flag = 0;
//                  doubth=i-1;

//             }
//             if(j== doubth||(j==a-1&&flag==1))
//             {
//                 if(j==a-1&&flag==1)
//                 doubth=a-1;
//                 foi(k, doubtl, doubth, b)
//                 {

//                 }
//             }
//         }
//     }
// }
// return;
// }

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
