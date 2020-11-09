// Weird Algorithm

#include <iostream>

using namespace std;
typedef long long ll;
#define endl "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  ll n; cin >> n;

  while (n != 1) {
    cout << n << " ";
    n = n&1 ? 3*n + 1 : n/2;
  }

  cout << n << endl;
}
