#include <bits/stdc++.h>
#include <unordered_map>

/*
**
Success doesn't come to you ,
You Go To IT .
**
*/
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define finish(x) return cout << x << endl, 0;
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;


ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int n, m;
vector<int>v;
bool ok(ll mid){
	int sz = 0;
	int sum = 0;
	for (int i = 0; i < n; i++){
		if (v[i]>mid) return 0;
		else if (sum + v[i] == mid){
			sum = 0;
			sz++;
		}
		else if (sum + v[i]<mid)
			sum += v[i];
		else{
			sz++;
			sum = v[i];
		}
	}
	if (sum)++sz;
	if (sz <= m)
		return 1;
	return 0;
}
int main(){
	Compiler_Beso

	while (cin >> n >> m)
	{
		v.resize(n);
		for (int i = 0; i < n; i++){
			cin >> v[i];
		}
		ll l = 1, r = 2e9, ans = 2e9;
		while (l <= r)
		{
			ll mid = (l + r) / 2;
			int res = ok(mid);
			if (res){
				ans = min(ans, mid);
				r = mid - 1;
			}
			else
				l = mid + 1;
		}
		cout << ans << endl;
	}


	return 0;
}
