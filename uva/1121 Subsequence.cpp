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

		ll n, m;
	while (cin>>n>>m)
	{
		vector<ll>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];

		ll l = 0, r = 0, sum = 0, mx = 2e9;
		while (l<n)
		{
			while (r < n && sum<m ){
				sum += v[r];
				r++;
			}
			if (sum >= m){
				mx = min(mx, r - l);
			}
			sum -= v[l];
			l++;
		}
		if (mx == 2e9)cout << 0 << endl;
		else
		cout << mx << endl;
	}

	return 0;
}
