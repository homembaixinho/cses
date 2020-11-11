// Bit Strings

#include <iostream>
using namespace std;
#define endl "\n"

const int p = 1000000007;
long long n, m = 2, ans = 1;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  while (n > 0) {
    if (n & 1)
      ans = (m*ans) % p;

    n = n >> 1;
    m = (m*m) % p;
  }

  cout << ans << endl;
}
