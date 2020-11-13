// Chessboard and Queens

#include <iostream>
using namespace std;
#define endl "\n"

int board[8][8], ans;
int c[8], d1[16], d2[16];

void search(int y) { 
  if (y == 8) {
    ans++;
    return;
  }

  for (int x = 0; x < 8; x++) {
    if (c[x] || d1[x+y] || d2[x-y+7] || board[y][x]) continue;
    
    c[x] = d1[x+y] = d2[x-y+7] = 1; search(y+1);
    c[x] = d1[x+y] = d2[x-y+7] = 0;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  char tmp;
  for (int i = 0; i < 8; i++)
    for (int j = 0; j < 8; j++) {
      cin >> tmp;
      board[i][j] = tmp == '*';
    }

  search(0);
  cout << ans << endl;
}
