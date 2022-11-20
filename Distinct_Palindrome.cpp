// //🚩HHM🚩
// // DATE: 15-06-2022
// // TIME:20:01:07

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define dbl double
// #define deb(v) cout << #v << " " << v << "\n"
// #define debv(v)           \
//     cout << #v << ": ";   \
//     for (auto x : v)      \
//     {                     \
//         cout << x << " "; \
//     }                     \
//     cout << endl
// #define deb2(v, k) cout << #v << " " << v << "\n" \
//                         << #k << " " << k << "\n"
// #define foi(i, base, n, k) for (i = base; i < n; i += k)
// #define fod(i, base, n, k) for (i = base; i >= n; i -= k)
// #define vec(type1, name) vector<type1> name
// #define vp(type1, type2, name) vector<pair<type1, type2>> name
// #define st(type, name) set<type> name
// #define mpp(type1, type2, name) map<type1, type2> name
// #define pb push_back
// //#define     mp make_pair
// #define fir first
// #define sec second
// #define all(x) x.begin(), x.end()
// #define part(x, a, b) x.begin() + a, x.begin() + b
// #define Pi 3.1415926535897932384626

// void hhm()
// {
//     ll i, j, k;
//     ll n, x;
//     cin >> n >> x;
//     if ((n + 1) / 2 < x)
//     {
//         cout << -1 << "\n";
//         return;
//     }
//     vec(char, v);
//     for (i = 0; i < x; i++)
//     {
//         v.pb(char('a' + i));
//     }
//     string s = "";
//     if (n % 2 && (n + 1) / 2 == x)
//     {
//         s = v[0];
//         v.erase(v.begin());
//     }
//     else if (n % 2)
//         s = v[0];
//     for (i = 0; i < n / 2; i++)
//     {
//         if (v.size() == 1)
//         {
//             s += v[0];
//             s = v[0] + s;
//         }
//         else
//         {
//             s += v[0];
//             s = v[0] + s;
//             v.erase(v.begin());
//         }
//     }
//     cout << s << "\n";
//     return;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     ll t = 1;
//     cin >> t;

//     while (t--)
//     {
//         hhm();
//     }
// }

// //#ifndef ONLINE_JUDGE
// //  freopen("in.txt", "r", stdin);
// //	 freopen("output.txt", "w", stdout);
// //#endif
// A Better (than Naive) Solution to find all divisors
#include <iostream>
#include <math.h>
using namespace std;

// Function to print the divisors
void printDivisors(int n)
{
	// Note that this loop runs till square root
	for (int i=1; i<=sqrt(n); i++)
	{
		if (n%i == 0)
		{
			// If divisors are equal, print only one
			if (n/i == i)
				cout <<" "<< i;

			else // Otherwise print both
				cout << " "<< i << " " << n/i;
		}
	}
}

/* Driver program to test above function */
int main()
{
	cout <<"The divisors of 100 are: \n";
	printDivisors(105);
	return 0;
}

// this code is contributed by shivanisinghss2110
