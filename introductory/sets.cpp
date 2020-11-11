// Two sets

#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl "\n"

int n, r;
vi a, b;
ll t;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  r = n % 4;

  if (r == 0 || r == 3) {
    cout << "YES" << endl;
    t = (ll) n*(n+1)/4;

    for (int i = n; i > 0; i--) {
      if (i <= t) {
        t -= i;
        a.pb(i);
      } else b.pb(i);
    }

    cout << a.size() << endl;
    for (int i : a)
      cout << i << " ";
    cout << endl;

    cout << b.size() << endl;
    for (int i : b)
      cout << i << " ";
    cout << endl;
  } else cout << "NO" << endl;
}
