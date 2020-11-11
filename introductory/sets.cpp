// Two sets

#include <iostream>
using namespace std;
#define endl "\n"

int n, r;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  r = n % 4;

  if (r == 0 || r == 3) {
    cout << "YES" << endl; 

    if (r == 0) {
      cout << n/2 << endl;
      for (int i = 1; i < n/2; i += 2)
        cout << i << " " << n-i+1 << " ";
      cout << endl;

      cout << n/2 << endl;
      for (int i = 2; i <= n/2; i += 2)
        cout << i << " " << n-i+1 << " ";
      cout << endl;
    } else {
      cout << (n-1)/2 << endl << n << " ";
      for (int i = 1; i <= (n-1)/4; i++)
        cout << i << " " << n-i << " ";
      cout << endl;

      cout << (n + 1)/2 << endl;
      for (int i = (n+3)/4; i <= (n-1)/2; i++)
        cout << i << " " << n-i << " ";
      cout << endl;
    }
  } else {
    cout << "NO" << endl;
  }
}
