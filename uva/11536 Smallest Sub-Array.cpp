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

int main(){
	Compiler_Beso

		int t, e = 0;
	cin >> t;
	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		int a[3] = { 1, 2, 3 };
		vector<int>v;
		cout << "Case "<<++e<<": ";
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);

		for (int i = 3; i < n; i++){
			int x = (v[i-1] + v[i-2] + v[i-3]) % m + 1;
			v.push_back(x);
		}
		int l = 0, r = 0, mx = 1e9;
		map<int,int>st;
		while (l < n){
			while (r < n && st.size()<k){
				if (v[r] <= k)
					st[v[r]]++;
				r++;
			}
			if (st.size() == k)
				mx = min(mx, r - l);
			if (v[l] <= k)
				st[v[l]]--;
			if (st[v[l]] == 0)
				st.erase(v[l]);
			l++;
		}
		if (mx != 1e9)cout << mx<<endl;
		else cout << "sequence nai" << endl;
		
	}

	return 0;
}
