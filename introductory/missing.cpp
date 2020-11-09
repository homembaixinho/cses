// Missing Number

#include <iostream>
using namespace std;
typedef long long ll;
#define endl "\n"
#define maxn 200001

ll n, s, m;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i = 1; i < n; i++) {
    cin >> m;
    s += m;
  }

  cout << n * (n+1) / 2 - s << endl;
}
