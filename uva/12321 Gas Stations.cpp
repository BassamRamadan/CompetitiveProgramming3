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



int main(){

	Compiler_Beso

		int l, step;
	while (cin>>l>>step && (l||step))
	{
		vector<pair<int, int>>dic;
		for (int i = 0; i < step; i++)
		{
			int x, y;
			cin >> x >> y;
			dic.push_back({x-y,x+y});
		}
		sort(all(dic));
		int ptr = 0, dis = 0,dif=0,ans=step;
		while (dis < l)
		{
			while (ptr < step && dic[ptr].first <= dis) {
				dif = max(dif, dic[ptr++].second);
			}
				if (dif == dis)
					break;
				dis = dif;
				--ans;
			
		}
		if (dis < l)
			cout << -1 << endl;
		else
			cout << ans << endl;
	}
	return 0;
}