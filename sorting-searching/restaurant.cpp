// Restaurant Customers

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define pb push_back

vector<int> arrival, leaving;
int n, m, ans;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;

  int a, b;
  while (n--) {
    cin >> a >> b;
    
    arrival.pb(a);
    leaving.pb(b);
  }

  sort(arrival.begin(), arrival.end());
  sort(leaving.begin(), leaving.end());

  auto i = arrival.begin();
  auto j = leaving.begin();

  while (i != arrival.end()) {
    i++, m++;

    if (*j <= *i)
      j++, m--;
    
    ans = max(ans, m);
  }

  cout << ans << endl;
}
