// Apple Division

#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;
#define endl "\n"
#define maxn 21
#define inf 1000000001

ll n, t, a[maxn], ans=inf;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    t += a[i];
  }

  for (ll i = 0; i < (1<<n); i++) {
    ll s = 0;
    
    for (ll j = 0; j < n; j++)
      if (i&(1<<j)) s += a[j];

    ans = min(ans, abs(t-2*s));
  }

  cout << ans << endl;
}
