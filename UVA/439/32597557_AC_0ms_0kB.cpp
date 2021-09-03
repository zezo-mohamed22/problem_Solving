/*Make ur Family always proud

while (!achieve acpc)
{
keep practice always and help another people to achieve it}
*/
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <set>
#include <list>
#include <queue>
#include <deque>
#include <map>
#include <stack>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> element;
typedef vector<ll> longelem;
int dx[] = { 1, 1, -1, -1, 2, 2, -2, -2 };
int dy[] = { 2, -2, 2, -2, 1, -1, 1, -1 };
int n , m ;
bool valid(int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= m)
        return 0;
    return 1;
}
void ZEZO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
vector<vector<int>>adj ;
vector<bool> visited ;
int grid[9][9];
string a , b ;
void harry_potter(){
    n=m=8;
    memset(grid, -1, sizeof(grid));    int x1 =a[1]-'1';int y1=a[0]-'a';
    int x2 = b[1]-'1' ; int y2 = b[0]-'a';

    // m3a source w m3a dis;
    queue<pair<int ,int >>q ;
    q.push({x1,y1});
    grid[x1][y1]=0 ;
    while (q.size())
    {
        auto par = q.front();
        q.pop();
        if (par.first==x2 && par.second==y2)
        {
            cout<<"To get from "<<a<<" to "<<b<<" takes "<<grid[par.first][par.second]<<" knight moves.\n";
            return ;
        }
        for (int i = 0 ; i<8 ;i++)
        {
            int r= par.first+dx[i];
            int c=par.second+dy[i];
            if (!valid(r,c) )
            {
                continue ;
            }
            if (grid[r][c]==-1)
            {
                grid[r][c]=grid[par.first][par.second]+1;
                q.push({r,c});
            }
        }
    }

}

int main()
{
    ZEZO();

    int T = 1; //cin >> T;
    while (cin>>a>>b)
    {
        harry_potter();
    }

}