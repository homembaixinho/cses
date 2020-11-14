// Distinct Numbers

#include <iostream>
#include <algorithm>
using namespace std;
#define endl "\n"
#define maxn 200001

int n, x[maxn], ans = 1;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> x[i];

  sort(x, x+n);
  
  for (int i = 1; i < n; i++) {
    if (x[i] != x[i-1]) ans++;
  }

  cout << ans << endl;
}
