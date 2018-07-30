#include <bits/stdc++.h>
/*
 **
 *** Your best is not enough
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
int FixMod(int s,int k){return (s%k+k)%k;}


enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };

const int MX=50000+5;


int main(){
    
    Compiler_Beso
    
 
        
        int n, m,trav,SR;
        cin >> n >> m >> SR >> trav;
        vector<ll>costs(MX,1e18);
       vector<vector<pair<int, int> > >v(MX);
        for (int i = 0; i < m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            v[a].push_back({ b, c });
            v[b].push_back({ a, c });
        }
        costs[SR] = 0;
        priority_queue<pair<int, int>>q;
        q.push({ SR, 0 });
        while (!q.empty())
        {
            pair<int, int>cur = q.top();
            q.pop();
            for (int i = 0; i < v[cur.first].size(); i++){
                int b = v[cur.first][i].first;
                int c = v[cur.first][i].second;
                if (costs[b]>costs[cur.first] + c)
                {
                    costs[b] = costs[cur.first] + c;
                    q.push({ b, costs[b] });
                }
            }
        }
    
    // minimume cost from Source to trav
    
        cout<<costs[trav]<<endl;
    
   
    return 0;
}





