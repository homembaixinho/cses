// Concert Tickets

#include <algorithm>
#include <iostream>
#include <set>
using namespace std;
#define endl '\n'

multiset<int, greater<int>> h;
int n, m, t;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  
  while (n--) {
    cin >> t;
    h.insert(t);
  }

  while (m--) {
    cin >> t;
    auto it = h.lower_bound(t);

    if (it == h.end())
      cout << -1 << endl;
    else {
      cout << *it << endl;
      h.erase(it);
    }
  }
}
