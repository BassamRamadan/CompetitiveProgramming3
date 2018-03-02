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

ll save[40];
int main(){

	
	Compiler_Beso

		int banks, lines;
	while (cin >> banks >> lines && banks && lines){
		for (int i = 1; i <= banks; i++)
			cin >> save[i];
		bool f = 0;
		for (int i = 0; i < lines; i++)
		{
			int l, r, k;
			cin >> l >> r >> k;
			save[l] -= k;
			save[r] += k;
		}
		for (int i = 1; i <= banks; i++)
		{
			if (save[i] < 0)
			{
				f = 1;
				break;
			}
		}
		cout << (f ? "N" : "S") << endl;
	}
		
	
	return 0;

}