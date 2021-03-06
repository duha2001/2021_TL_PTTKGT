#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
 
/** -----BASIC MACROES----- **/
#define endl '\n'
#define i64 long long
#define u64 unsigned long long
#define ld long double
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define mmap multimap
#define mset multiset
#define umap unordered_map
#define uset unordered_set
#define ummap unordered_multimap
#define umset unordered_multiset
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define REcheck cout << "RE here?\n"
#define tracker1(i) cout << "working at " << i << endl;
#define tracker2(i,j) cout << "working at " << i << "-" << j << endl;
#define tracker3(i,j,k) cout << "working at " << i << "-" << j << "-" << k << endl;
const long double PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const long long MOD = 1000000007LL;
const long long INF = 1e9;
const long long LINF = 1e18;
const long double EPS = 1e-9;
const long double GOLD = ((1+sqrt(5))/2);
typedef pair<i64, i64> pii;
typedef pair<i64, pii> pip;
typedef pair<pii, i64> ppi;
typedef tuple<i64, i64> tii;
typedef tuple<i64, i64, i64> tiii;
 
/** -----BIT CONTROLS----- **/
template<class T> int getbit(T s, int i) { return (s >> 1) & 1; }
template<class T> T onbit(T s, int i) { return s | (T(1) << i); }
template<class T> T offbit(T s, int i) { return s & (~(T(1) << i)); }
template<class T> int cntbit(T s) { return __builtin_popcount(s); }
 
void VarInput() {
	// for multi-testcase problems
}
 
void ProSolve() {
	i64 V, K; cin >> V >> K;
	vector<vector<pii>> adj(V+1, vector<pii>(0));
	vector<i64> dist(V+1, LINF);
	vector<i64> prev(V+1, -1);
	vector<bool> visited(V+1, false);
	while (K--) {
		i64 a, b, c; cin >> a >> b >> c;
		adj[a].pub(mp(b,c)); adj[b].pub(mp(a,c));
	}
	i64 A = 1, B = V;
	priority_queue<pii> Q; Q.push(mp(0LL, A));
	while (!Q.empty()) {
		pii working = Q.top(); Q.pop();
		i64 node = working.se, val = -working.fi;
		if (visited[node]) continue;
		visited[node] = true;
		//tracker1(node);
		for (i64 i=0; i<adj[node].size(); i++) {
			//cout << "sub: "; tracker1(adj[node][i].fi);
			if (!visited[adj[node][i].fi] && val+adj[node][i].se<dist[adj[node][i].fi]) {
				dist[adj[node][i].fi] = val+adj[node][i].se;
				prev[adj[node][i].fi] = node;
				//cout << "new dist of " << adj[node][i].fi << " = " << dist[adj[node][i].fi] << endl;
				Q.push(mp(-dist[adj[node][i].fi], adj[node][i].fi));
			}
		}
	}
	if (dist[B] == LINF) cout << "-1";
	else {
		stack<i64> S; S.push(B);
		while (S.top() != A) S.push(prev[S.top()]);
		while (!S.empty()) {
			cout << S.top() << " "; S.pop();
		}
	}
}
 
/** -----MAIN FUNCTION----- **/
int main() {
	//freopen("FILE.INP", "r", stdin);
	//freopen("FILE.OUT", "w", stdout);
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	VarInput();
	//while(T--) ProSolve(); // for multi-testcase problems
	ProSolve(); // for regular problems
	return 0;
}