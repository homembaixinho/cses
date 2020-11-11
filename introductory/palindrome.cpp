// Palindrome Reorder

#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
typedef unordered_map<char, int> map;
#define endl "\n"

string s, p;
map f;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> s;
  
  for (char c: s) {
    if (f.find(c) == f.end()) f.insert({c, 1});
    else f[c]++;
  }

  string middle;

  for (map::iterator it = f.begin(); it != f.end(); it++) {
    if (it->second & 1) {
      if (!middle.empty()) {
        cout << "NO SOLUTION" << endl;
        return 0;
      }

      middle = string(it->second, it->first);
    } else
      p += string((it->second)/2, it->first);  
  }

  cout << p;
  cout << middle;
  reverse(p.begin(), p.end()); cout << p << endl;
}
