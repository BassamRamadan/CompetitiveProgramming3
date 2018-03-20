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


int arr[100000], x[100000];
ll Merg_sort(int arr[], int start, int mid, int end){

	ll l = start, r = mid + 1, e = 0, ans = 0;
	for (int i = start; i <= end; i++)
	{

		if (l > mid)              // size first arr < size second arr
			x[e++] = arr[r++];
		else if (r > end)         // size first arr > size second arr
			x[e++] = arr[l++];
		else if (arr[l] < arr[r])  // compare
			x[e++] = arr[l++];
		else
		{
			ans += (mid + 1) - (l);  // insert number index r-mid in index l move from r to l
			x[e++] = arr[r++];
		}


	}

	for (int i = 0; i < e; i++)
		arr[start++] = x[i];

	return ans;
}

ll Merg_split(int arr[], int start, int end){
	ll	ans = 0;
	if (start < end){
		int mid = (start + end) / 2;
		ans = Merg_split(arr, start, mid);
		ans += Merg_split(arr, mid + 1, end);
		ans += Merg_sort(arr, start, mid, end);
	}
	return ans;
}


int main(){

	Compiler_Beso


		


		int n;
		while(cin >> n && n){
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		cout << (Merg_split(arr, 0, n - 1) & 1 ? "Marcelo" : "Carlos") << endl;

	}

	return 0;
}