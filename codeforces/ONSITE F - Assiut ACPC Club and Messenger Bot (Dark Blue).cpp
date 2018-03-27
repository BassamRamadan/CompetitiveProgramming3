//#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <bitset>

using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
#define endl '\n'
const double EPS = 1e-12;
typedef long long ll;
const double PI = 3.14159265359;

int a[26];
string s;
char check(char x,char y){

	ll mn = LLONG_MAX;
	char c;
	for (int i = 0; i < 26; i++)
	{
		if (abs(a[i] - a[x-'a']) + abs(a[i] - a[y-'a']) < mn)
		{
			mn=abs(a[i] - a[x-'a']) + abs(a[i] - a[y-'a']);
			c = i + 'a';
		}
	}
	return c;
}
void cost(){
	ll ans = 0;
	for (int i = 1; i < s.size(); i++)
		ans += abs(a[s[i] - 'a'] - a[s[i - 1] - 'a']);
	cout << ans << endl << s;
}
int main(){

	Compiler_Beso

		
	cin >> s;
	for (int i = 0; i < 26; i++)
		cin >> a[i];
	if (s.find('?') == -1)
	{
		cost();
		return 0;
	}
	int f = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (!isalpha(s[i]))
			f++;
	}
	if (f==s.size())
	{
		cout << 0 << endl;
		for (int i = 0; i < s.size(); i++)
			cout << 'a';
		return 0;
	}
	
	int l = 0, r = 0,sz=s.size();
	while (l < sz)
	{
		if (s[l] != '?')
		{
			l++;
			continue;
		}
		r = l;
		while (r < sz && s[r]=='?')
			r++;
		char c;
		if (r == sz)
			c = check(s[l-1], s[l-1]);
		else if (l == 0)
			c = check(s[r], s[r]);
		else
			c = check(s[l - 1], s[r]);
		for (int i = l; i < r; i++)
			s[i] = c;
		l = r;
	}
	cost();



	return 0;
}