// Coin Piles

#include <iostream>
using namespace std;
#define endl "\n"

int t, a, b;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> t;
  while (t--) {
    cin >> a >> b;

    if (a > b) swap(a, b);
    cout << ((a+b)%3 == 0 && a >= b/2 ? "YES" : "NO") << endl;
  }
}
