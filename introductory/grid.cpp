// Grid Paths

#include <iostream>
#include <string>
using namespace std;
#define endl '\n'
const int n = 7;
const int m = n*n - 1;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dc[] = {'D', 'U', 'R', 'L'};

bool grid[n][n];
int seen, ans;
string p;

bool in(int x) { return x >= 0 && x < n; }

void search(int x, int y, char c) {
  if (seen > 0)
    if (p[seen-1] != '?' && p[seen-1] != c)
      return;

  if (x == 0 && y == n-1) {
    if (seen == m) ans++;
    return;
  }
  
  int a = (in(x+1) && !grid[x+1][y]) + (in(x-1) && !grid[x-1][y]);
  int b = (in(y+1) && !grid[x][y+1]) + (in(y-1) && !grid[x][y-1]);
  if ((!a && b == 2) || (!b && a == 2)) return;

  seen++; grid[x][y] = 1;
 
  for (int d = 0; d < 4; d++) {
    int xx = x + dx[d];
    int yy = y + dy[d];

    if (in(xx) && in(yy))
      if (!grid[xx][yy])
        search(xx, yy, dc[d]);
  }

  seen--; grid[x][y] = 0;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> p;
  
  search(0, 0, '?');
  cout << ans << endl;
}
