#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;
#define ll long long
#define forn(start, n) for (int i = (start); i < (n); i++)

// Done -  1896B - AB Flipping
// void solve()
// {
//   ll n;
//   string s;

//   cin >> n >> s;

//   ll a = -1, b = -1;

//   forn(0, n)
//   {
//     if (s[i] == 'A')
//     {
//       a = i;
//       break;
//     }
//   }

//   forn(0, n)
//   {
//     if (s[n - i - 1] == 'B')
//     {
//       b = n - i - 1;
//       break;
//     }
//   }

//   if (a > b || a == -1 || b == -1)
//     cout << 0 << endl;
//   else
//     cout << b - a << endl;
// }

// DNF - 2179C - Blackslex and Number Theory - UNderstood - close to being solve after using hints
// void solve()
// {
//   ll n;
//   cin >> n;
//   vector<ll> v(n);

//   ll mini = INT_MAX;
//   forn(0, n)
//   {
//     cin >> v[i];
//     mini = min(mini, v[i]);
//   }
//   bool flag = true;
//   forn(0, n)
//   {
//     if (v[i] != mini && v[i] - mini < mini + 1)
//     {
//       flag = false;
//     }
//   }
//   cout << mini + flag << endl;
// }

// DNF - 1826A - Trust Nobody -- Brute Force for the no. if liars
// void solve()
// {
//   ll n;
//   cin >> n;
//   vector<ll> v(n);
//   map<ll, ll> m;
//   forn(0, n)
//   {
//     cin >> v[i];
//     m[v[i]]++;
//   }

//   auto it = m.begin();
//   for (it = m.begin(); it != m.end(); it++)
//   {
//     ll guess = it->first;
//     ll count = it->second;
//     // if (guess == 0 && count != n) cout << -1 <<endl;
//     //  break;
//     if (n - guess == count)
//     {
//       cout << guess << endl;
//       break;
//     }
//   }

//   if (it == m.end())
//     cout << -1 << endl;
// }

void solve()
{
  ll n, q;
  cin >> n >> q;
  vector<ll> v(n);
  vector<ll> o(n);
  forn(0, n)
  {
    cin >> v[i];
    o[i] = (i > 0 ? o[i - 1] : 0) + (v[i] == 1);
  }

  forn(0, n)
  {
    if (i != 0)
      v[i] += v[i - 1];
  }
  ll l, r;

  forn(0, q)
  {
    cin >> l >> r;

    if (l == r)
    {
      cout << "NO" << endl;
      continue;
    }
    l--;
    r--;

    ll sum = v[r] - (l > 0 ? v[l - 1] : 0);
    ll ones = o[r] - (l > 0 ? o[l - 1] : 0);
    if (ones == 0)
    {
      cout << "YES" << endl;
    }
    else if (ones == r+1  - l )
    {
      cout << "NO" << endl;
    }
    else
    {
      if ((r + 1 - l) + ones <= sum)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
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