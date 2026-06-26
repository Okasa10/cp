#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;
#define ll long long
#define forn(start, n) for (int i = (start); i < (n); i++)

// DONE - 1794B - Not Dividing
// void solve()
// {
//   ll n;
//   cin >> n;
//   vector<int> v(n);

//   forn(0, n)
//   {
//     cin >> v[i];
//     if (v[i] == 1)
//       v[i]++;
//     if (i != 0 && v[i] % v[i - 1] == 0)
//       v[i]++;
//     cout << v[i] << " ";
//   }
//   cout << endl;
// }

// Done - - 1991B - AND Reconstruction
// void solve()
// {
//   ll n;
//   cin >> n;
//   vector<int> v(n - 1);
//   vector<int> ans(n);
//   ans[n - 1] = -1;

//   forn(0, n - 1)
//   {
//     cin >> v[i];
//   }
//   ans[0] = v[0];

//   int i;
//   for (i = 1; i < n - 1; i++)
//   {
//     ll exp = v[i] | v[i - 1];

//     if ((exp & ans[i - 1]) != v[i - 1])
//     {
//       break;
//     }
//     else
//     {
//       ans[i] = exp;
//     }
//   }

//   if (i < n - 1)
//   {
//     cout << -1 << endl;
//   }
//   else
//   {
//     ans[i] = v[i - 1];
//     forn(0, n)
//     {
//       cout << ans[i] << " ";
//     }
//     cout << endl;
//   }
// }

//  DNF - 1808B - Playing in a Casino - clicked concept but couldnt contruct formulae
// void solve()
// {
//   ll n, m;
//   cin >> n >> m;

//   vector<vector<ll>> v(m, vector<ll>(n));
//   for (int i = 0; i < n; i++)
//     for (int j = 0; j < m; j++)
//       cin >> v[j][i];

//   forn(0, m)
//   {
//     sort(v[i].begin(), v[i].end());
//   }

//   for (int j = 0; j < m; j++)
//   {
//     for (int i = 0; i < n; i++)
//       cout << v[j][i] << " ";
//     cout << endl;
//   }
//   cout << endl;

//   ll ans = 0;
//   if (n & 1)
//   {
//     for (int i = 0; i < m; i++)
//       for (int j = 1; j <= n / 2; j++)
//       {
//         ll n1 = v[i][j] - v[i][j - 1];
//         ll n2 = v[i][n - j] - v[i][n - j - 1];
//         int mul = 1;
//         for (int k = n - 1; k > n - 1 - j; k--)
//         {
//           mul *= k;
//         }
//         for (int k = j; k > 0; k--)
//         {
//           mul *= k;
//         }
//         cout << n1 << " " << n2 << " " << mul << " "  << endl;

//         ans += (n1 * mul) + (n2 * mul);
//       }
//   }
//   else
//   {
//     for (int i = 0; i < m; i++)
//     {

//       ll k = (n - 1);
//       ll mul = n - 1;
//       ll j = 1;
//       while (k)
//       {
//         ll n1 = v[i][j] - v[i][j - 1];
//         ll n2 = n - j != j ? (v[i][n - j] - v[i][n - j - 1]) : 0;
//         cout << n1 << " " << n2 << " " << mul << " " << k << endl;
//         ans += (n1 * mul) + (n2 * mul);
//         k /= 2;
//         mul += k;
//         j++;
//       }
//     }
//   }
//   cout <<"! "<< ans << endl;
// }

void solve()
{
  ll n, m;
  cin >> n >> m;

  vector<vector<ll>> v(m, vector<ll>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> v[j][i];

  forn(0, m)
  {
    sort(v[i].begin(), v[i].end());
  }



}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}