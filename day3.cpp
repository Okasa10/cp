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

// 2102/A -  Dinner Time
// void solve()
// {
//   ll n, m ,p ,q ;
//   cin >> n >> m >> p >> q;

// }

// 2173B - Niko's Tactical Cards
// void solve()
// {
//   ll n;
//   cin >> n;
//   vector<ll> a(n);
//   vector<ll> b(n);
//   forn(0, n)
//   {
//     cin >> a[i];
//   }
//   forn(0, n)
//   {
//     cin >> b[i];
//   }
//   ll maxi = max(-a[0], b[0]);
//   ll mini = min(-a[0], b[0]);
//   forn(1, n)
//   {
//     ll tmax = maxi;
//     maxi = max({b[i] - mini, b[i] - tmax, mini - a[i], tmax - a[i]});
//     mini = min({b[i] - mini, b[i] - tmax, mini - a[i], tmax - a[i]});
//   }
//   cout << maxi << endl;
// }

void solve()
{
  ll n;
  cin >> n;
  ll osum = n * (n + 1) / 2;
  ll msum;
  cout << 2 << " " << 1 << " " << n << endl;
  cin >> msum;

  ll diff = msum - osum;
  ll low = 1;
  ll high = n;
  while (low < high)
  {
    ll mid = (low + high) / 2;

    ll presum, postsum;
    cout << 1 << " " << low << " " << mid << endl;
    cin >> presum;
    cout << 2 << " " << low << " " << mid << endl;
    cin >> postsum;

    ll result = postsum - presum;
    if (result == 0)
    {
      low = mid + 1;
    }
    else if (result == diff)
    {
      high = mid;
    }
    else
    {
      cout << "! " << mid - result + 1 << " " << mid + (diff - result) << endl;
      break;
    }
  }

  if (low == high)
    cout << "! " << low << " " << low << endl;
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