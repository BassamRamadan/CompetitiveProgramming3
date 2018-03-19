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


int arr[100000];
int Merg_sort(int arr[], int start, int mid, int end){
	int l = start, e = start, ans = 0;
	vector<int>left, right;
	while (l <= mid)
		left.push_back(arr[l++]);
	while (l <= end)
		right.push_back(arr[l++]);
	for (int i = 0, j = 0; i < left.size() || j < right.size();)
	{
		
		if (i >= left.size())
			arr[e++] = right[j++];
		else if (j >= right.size())
			arr[e++] = left[i++];
		else if (left[i] <= right[j])
			arr[e++] = left[i++];
		else
		{
			ans += left.size() - i;
			arr[e++] = right[j++];
		
		}
	}
	return ans;
}

int Merg_split(int arr[], int start, int end){
	int	ans = 0;
	if (start < end){
		int mid = (start + end) / 2;
		ans +=Merg_split(arr, start, mid);
		ans +=Merg_split(arr, mid + 1, end);
		ans += Merg_sort(arr, start, mid, end);
	}
	return ans;
}


int main(){

	Compiler_Beso

		int t;
	cin >> t;
	while (t--)
	{


		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		cout << "Optimal train swapping takes " << Merg_split(arr, 0, n - 1) << "\n";

	}
		return 0;
}