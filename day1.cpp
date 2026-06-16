// LEVEL 14
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;
#define ll long long
#define forn(start, n) for (ll i = (start); i < (n); i++)

// B. Good Arrays -- Unsolved
// void solve()
// {
//   ll n;
//   cin >> n;
//   vector<ll> v(n);
//   long long sum = 0;
//   forn(0, n)
//   {
//     cin >> v[i];
//     sum += v[i];
//   }

//   if (n== 1 || sum <= (n +  (n / 2)))
//     cout << "NO" << endl;
//   else
//     cout << "YES" << endl;
// }

// B. Matrix Stabilization
// void solve()
// {
//   ll n, m;
//   cin >> n >> m;
//   vector<vector<ll>> v(n, vector<ll>(m));
//   vector<ll> a = {0, +1, 0, -1};
//   vector<ll> b = {+1, 0, -1, 0};
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cin >> v[i][j];
//     }
//   }

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       int maxi = 0;
//       for (int k = 0; k < 4; k++)
//       {
//         ll r = i + a[k];
//         ll c = j + b[k];

//         if (r >= 0 && c >= 0 && r < n && c < m)
//         {
//           maxi = max(maxi, (int32_t)v[r][c]);
//         }
//       }

//       if (maxi < v[i][j])
//         v[i][j] = maxi;
//     }
//   }

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cout << v[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// C. Palindromic Subsequences
//  void solve()
//  {
//    int n;
//    cin >> n;

//   vector<int> ans(n, 1);

//   for (int i = 1; i < n-1; i++)
//   {
//     if (i != n / 2)
//       ans[i] = i + 1;
//   }

//   forn(0, n)
//   {
//     cout << ans[i] << " ";
//   }
//   cout << endl;
// }

// C. No Prime Differences -- Unsolved
void solve()
{
  int n, m;
  cin >> n >> m;

  vector<vector<ll>> v(n, vector<ll>(m));

  if (!(m & 1))
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        v[i][j] = (n * i) + j + 1;
      }
    }
  }
  else if (!(n & 1))
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        v[i][j] = (n * j) + i + 1;
      }
    }
  }
  else
  {

  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{

  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}