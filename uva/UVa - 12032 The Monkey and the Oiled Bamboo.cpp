#include <bits/stdc++.h>
#include <unordered_map>

/* 
											   .
                      \/                    __/ \  .::::.-'-(/-/)
                             _/:  .::::.-' .-'\/\_`*******          __ (_))
                \/          /:  .::::./   -._-.  d\|               (_))_(__))
                             /: (""""/    '.  (__/||           (_))__(_))--(__))
                              \::).-'  -._  \/ \\/\|
                      __ _ .-'`)/  '-'. . '. |  (i_O
                  .-'      \       -'      '\|
             _ _./      .-'|       '.  (    \\                         % % %
          .-'   :      '_  \         '-'\  /|/      @ @ @             % % % %
         /      )\_      '- )_________.-|_/^\      @ @ @@@           % %\/% %
         (   .-'   )-._-:  /        \(/\'-._ `.     @|@@@@            ..|........
          (   )  _//_/|:  /          `\()   `\_\     |/_@@             )'-._.-._.-
           ( )   \()^_/)_/             )/      \\    /                /   /
            )  _.-\\.\(_)__._.-'-.-'-.//_.-'-.-.)\-'/._              /
        .-.-.-'   _o\ \\\     '::'   (o_ '-.-' |__\'-.-;~ ~ ~ ~ ~ ~~/   /\
                  \ /  \\\__          )_\    .:::::::.-'\          '- - -|
             :::''':::::^)__\:::::::::::::::::'''''''-.  \                '- - -
            :::::::  '''''''''''   ''''''''''''':::. -'\  \     C. SWANSIGER
        _____':::::_____________________________________\__\______________________
        -->
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
int n;
vector<int>v;
bool ok(ll mid){
	if (v[0] > mid) return 0;
	if (v[0] == mid) mid--;
	for (int i = 1; i < n; i++){
		if (mid < 0)return 0;
		if (v[i] - v[i - 1] > mid) return 0;
		if (v[i]-v[i-1] == mid) mid--;
	}
	return mid >= 0;
}
int main(){
	Compiler_Beso

		int t, id = 0;
	cin >> t;
	while (t--)
	{
	
		cin >> n;
		v.resize(n);
		for (int i = 0; i < n; i++){
			cin >> v[i];
		}
		ll l = 0, r = 1e18, ans = 1e18;
		while (l<=r)
		{
			ll mid = (l + r) / 2;
			if (ok(mid)){
				ans = min(ans, mid);
				r = mid - 1;
			}
			else l = mid + 1;
		}
		cout <<"Case "<<++id<<": "<< ans << endl;
	}




		
	return 0;
}
