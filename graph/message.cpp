// Message Route

#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define pb push_back
#define endl "\n"
const int maxn = 1e5+1;

vector<int> adj[maxn];
int n, m, pai[maxn];
bool seen[maxn];

void bfs() {
  seen[1] = true;
  queue<int> q;
  q.push(1);

  while (!q.empty()) {
    int v = q.front();
    q.pop();

    if (v == n) break;

    for (int u : adj[v]) {
      if (!seen[u]) {
        seen[u] = true;
        pai[u] = v;
        q.push(u);
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  
  int a, b;
  while (m--) {
    cin >> a >> b;

    adj[a].pb(b);
    adj[b].pb(a);
  }

  bfs();
  
  if (!seen[n])
    cout << "IMPOSSIBLE" << endl;
  else {
    int v = n;
    vector<int> ans = {v};

    while (v != 1) {
      v = pai[v];
      ans.pb(v);
    }

    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    
    for (int i : ans)
      cout << i << " ";
    cout << endl;
  }
}
