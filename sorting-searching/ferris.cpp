// Ferris Wheel

#include <algorithm>
#include <iostream>
using namespace std;
#define endl '\n'

const int maxn = 2*1e5+1;
int n, x, p[maxn], ans;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> x;
  for (int i = 0; i < n; i++)
    cin >> p[i];

  sort(p, p+n);

  int j = 0;
  for (int i = n-1; i >= j; i--) {
    if (p[i] + p[j] <= x) j++;
    ans++;
  }

  cout << ans << endl;
}
