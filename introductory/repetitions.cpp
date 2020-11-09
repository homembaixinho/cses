// Repetitions

#include <iostream>
#include <string>
using namespace std;
#define endl "\n"

string s;
int ans = 1, a = 1;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> s;

  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i-1]) a++;
    else a = 1;

    ans = max(ans, a);
  }
  
  cout << ans << endl;
}
