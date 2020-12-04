// Apartments

#include <algorithm>
#include <iostream>
using namespace std;
#define endl "\n"

const int maxn = 2*1e5+1;
int n, m, k, i, j, ans;
int a[maxn], b[maxn];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m >> k;

  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  sort(a, a+n);
  sort(b, b+m);  
  
  while (i < n && j < m) {
    if (b[j] < a[i] - k) j++;
    else if (a[i] + k < b[j]) i++;
    else i++, j++, ans++;
  }

  cout << ans << endl;
}
