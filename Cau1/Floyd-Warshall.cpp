#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<int>> d(128, vector<int>(128, 10000000));

int main() {
    ios::sync_with_stdio(0);
    
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        d[i][i] = 0;
    }
    vector<int> a(m), b(m), c(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i] >> c[i];
        d[a[i]][b[i]] = c[i];
        d[b[i]][a[i]] = c[i];
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    for (int i = 0; i < m; i++) {
        if (d[a[i]][b[i]] != c[i] || d[b[i]][a[i]] != c[i]) {cout << -1; return 0;}
    }
    cout << n*(n-1)/2 << endl;
    for (int i = 1; i <= n; i++) {
    	for (int j = i+1; j <= n; j++) {
    		cout << i << " " << j << " " << d[i][j] << "\n";
    	}
    }
    
    return 0;
}