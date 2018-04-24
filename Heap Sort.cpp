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
#include "linkedlist.h"
#include "Stack.h"
#include "Que.h"
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
void HeapIfy(int n, int arr[], int par){

	int l = par * 2 + 1;
	int r = par * 2 + 2;
	int larg = par;

	if (l<n&&arr[l]<arr[larg])larg = l;
	if (r<n&&arr[r]<arr[larg])larg = r;

	if (par != larg){
		swap(arr[par], arr[larg]);
		HeapIfy(n, arr, larg);
	}
	return;
}
void HeapSort(int n, int arr[]){
	for (int i = n / 2 - 1; i >= 0; i--){
		HeapIfy(n, arr, i);
	}



	for (int i = 0; i < n; i++)
	{
		cout << arr[0] << " ";
		arr[0] = 1e9;
		HeapIfy(n, arr, 0);
	}

}
int main(){

	Compiler_Beso

		int arr[8] = { 1, -2, 0, 23, -2, -2, 10, -1 };
	HeapSort(8, arr);


	return 0;
}