// LEVEL 14
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cmath>

using namespace std;
#define ll long long
#define forn(start, n) for (ll i = (start); i < (n); i++)

// B. Chips on the Board
//  void solve()
//  {
//    ll n;
//    cin >> n;
//    vector<ll> a(n);
//    vector<ll> b(n);
//    ll suma = 0;
//    ll sumb = 0;

//   forn(0, n)
//   {
//     cin >> a[i];
//   }
//   forn(0, n)
//   {
//     cin >> b[i];
//   }

//   ll mina = a[0];
//   ll minb = b[0];

//   forn(0, n)
//   {
//     suma += a[i];
//     sumb += b[i];

//     mina = min(a[i], mina);
//     minb = min(b[i], minb);
//   }

//   cout << min(suma + (n * minb), sumb + (n * mina)) << endl;

// }

// 1791G1 - Teleporters (Easy Version)
// void solve()
// {
//   ll n, c;
//   cin >> n >> c;
//   vector<ll> v(n);
//   vector<ll> ans;

//   forn(0, n)
//   {
//     cin >> v[i];
//     ans.push_back(i + 1 + v[i]);
//   }

//   sort(ans.begin(), ans.end());
//   ll res = 0;
//   forn(0, n)
//   {
//     if (c - ans[i] < 0)
//     {
//       break;
//     }
//     else
//     {
//       res++;
//       c -= ans[i];
//     }
//   }
//   cout << res << endl;
// }

// 1992D - Test of Love
//  void solve()
//  {
//    ll n, m, k;
//    cin >> n >> m >> k;
//    string s;
//    cin >> s;

//   vector<vector<ll>> v(n + 2, vector<ll>(2, -1));
//   forn(0, min(m + 1, n + 2))
//   {
//     v[i][0] = m - i;
//     v[i][1] = k;
//   }

//   forn(1, n + 1)
//   {
//     if (s[i - 1] == 'L')
//     {
//       for (int j = i; j < i + m + 1 && j < n + 2; j++)
//       {
//         v[j][0] = m - (j - i);
//         v[j][1] = v[i][1];
//       }
//     }
//     else if (s[i - 1] == 'W')
//     {
//       if (i + 1 < n + 2)
//       {
//         v[i + 1][0] = max(v[i + 1][0], v[i][0]);
//         v[i + 1][1] = max(v[i][1] - 1, v[i + 1][1]);
//       }
//     }
//     else
//     {
//       if (v[i][0] == 0 || v[i][1] < 0)
//         break;
//     }

//   }

//   if (v[n + 1][0] >= 0 && v[n + 1][1] >= 0)
//     cout << "YES" << endl;
//   else
//     cout << "NO" << endl;
// }

// 1974C - Beautiful Triple Pairs -- Required hint to solve
void solve()
{
  ll n;
  cin >> n;
  vector<ll> v(n);
  ll ans = 0;

  map<vector<ll>, ll> m;
  map<vector<ll>, ll> t;

  forn(0, n)
  {
    cin >> v[i];
  }

  forn(0, n - 2)
  {
    m[{v[i], v[i + 1], 0}]++;
    m[{0, v[i + 1], v[i + 2]}]++;
    m[{v[i], 0, v[i + 2]}]++;
    t[{v[i], v[i + 1], v[i + 2]}]++;
  }

  for (auto it = m.begin(); it != m.end(); it++)
  {
    
    ll cnt = it->second;
    ans += ((cnt) * (cnt - 1)) / 2;
  }


  for (auto it = t.begin(); it != t.end(); it++)
  {
   
    ll cnt = it->second;
    ans -= (3 *cnt* (cnt-1))/2;
  }

  cout << ans << endl;
}

int main()
{

  ll t;
  cin >> t;
  while (t--)
  {
    // cout << "Here" << endl;

    solve();
  }

  return 0;
}