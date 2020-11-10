// Permutations

#include <iostream>
using namespace std;
#define endl "\n"

int n;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;

  if (n > 1 && n < 4) {
    cout << "NO SOLUTION" << endl;
  } else {
    for (int i = 2; i <= n; i += 2) cout << i << " ";
    for (int i = 1; i <= n; i += 2) cout << i << " ";
    cout << endl;
  }
}
