// Increasing Array

#include <iostream>

using namespace std;
typedef long long ll;

#define endl "\n"
#define maxn 200001

ll n, x, m, ans;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;

    if (x < m) ans += m-x;
    else m = x;
  }

  cout << ans << endl;
}
