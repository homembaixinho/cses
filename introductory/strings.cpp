// Creating Strings I

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define endl "\n"
#define pb push_back

string s;
vector<string> permutations;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> s;

  sort(s.begin(), s.end());
  
  do permutations.pb(s);
  while (next_permutation(s.begin(), s.end()));

  cout << permutations.size() << endl;
  for (string p : permutations)
    cout << p << endl;
}
