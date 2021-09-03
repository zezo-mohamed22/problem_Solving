/*Make ur Family always proud

while (!achieve acpc)
{
keep practice always and help another people to achieve it}
*/
#include <cstring>
#include <iostream>
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
#include <sstream>
#include <stack>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
#define pb push_back
#define sz(v) ((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int N=30 ; 
char grid [30][30]; 
bool visited [N][N] ;
int n , m , t = 1;
bool valid(int i, int j) { return i >= 0 && i < n && j >= 0 && j < m; }
void ZEZOelgamdelynafsoyra7oacpc()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
}
void dfs(int r,int c)
{
	if (!valid(r,c)&&visited[r][c]&&grid[r][c]=='0')
	
	{
		return ; 
	}
	visited[r][c]=1 ; 
	for (int i = 0 ; i<8; i++)
	{
		int x = r+dx[i]; 
		int y = c+dy[i]; 
		if (valid(x,y)&&!visited[x][y]&&grid[x][y]=='1')
			{
			dfs(x,y); 
			}
	}
}
int ConnectedComponenetsCnt()
{
	int cnt = 0;
	for (int i = 0 ; i<n ; i++)
		{
			for (int j = 0 ; j<n ; j++){
		
				if(!visited[i][j]&&grid[i][j]=='1')
				{
					dfs(i,j);
					cnt++;
				}
			}
		}
	return cnt;
}
void harry_potter(){
	for (int i = 0 ; i<n ; i++)
	{
		for (int j = 0 ; j<n ; j++)
		{
			cin>>grid[i][j]; 
		}
	}
	cout<<"Image number "<<t++<<" contains "<<ConnectedComponenetsCnt()<<" war eagles."<<"\n"; 
	memset(visited,0,sizeof(visited));
}
int main()
{
	ZEZOelgamdelynafsoyra7oacpc();
	int t = 1;
	while (cin>>n)
	{
	   m=n ; 
		harry_potter();
	}
}
