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
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
const double EPS = 1e-12;
const double PI = 3.14159265359;
typedef long long ll;
const ll mod = ll(1e9 + 7);


int main(){

	
	Compiler_Beso


		int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		if (s.size() != 3)
			cout << 3 << endl;
		else
		{
			string one = "one";
			int ans = 0;
			for (int i = 0; i < 3; i++)
				ans += one[i] == s[i];
			
			if (ans>=2)
				cout << 1<< endl;
			else
				cout << 2 << endl;
		}
	}
	

	return 0;

}