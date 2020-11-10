// Number Spiral
 
#include <iostream>
 
using namespace std;
typedef long long ll;
#define endl "\n"
 
ll t, x, y;
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> t;
  while (t--) {
    cin >> y >> x;
    
    if (y < x) {
      if (x & 1)
        cout << x*x - y + 1 << endl;
      else
        cout << (x-1) * (x-1) + y << endl;
    } else {
      if (y & 1)
        cout << (y-1) * (y-1) + x << endl;
      else
        cout << y*y - x + 1 << endl;
    }
  }
}
