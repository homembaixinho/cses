// Trailing Zeros

#include <iostream>
#include <cmath>
using namespace std;
#define endl "\n"

int n, ans;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  for (int i = 5; i <= n; i *= 5)
    ans += floor(n/i);

  cout << ans << endl;
}
