// Two Knights

#include <iostream>
using namespace std;
typedef long long ll;
#define endl "\n"

int n;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;

  for (ll k = 1; k <= n; k++)
    cout << k*k * (k*k - 1)/2 - 4*(k-1)*(k-2) << endl;
}
