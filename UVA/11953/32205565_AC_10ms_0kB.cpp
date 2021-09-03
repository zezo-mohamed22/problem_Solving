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
const int N=105 ; 
vector<vector<char>>grid ; 
bool visited[N][N];
int n , m;
bool valid(int i, int j) { return i >= 0 && i < n && j >= 0 && j < m; }
void ZEZOelgamdelynafsoyra7oacpc()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
}
bool ok=0 ;

void dfs(int r, int c)
{
	if (!valid(r,c)||visited[r][c]||grid[r][c]=='.')
	
	{
		return ; 
	}
	visited[r][c]=1 ; 
	
	for (int i = 0 ; i<4; i++)
	{
		int x = r+dx[i]; 
		int y = c+dy[i]; 
		if (valid(x,y)&&!visited[x][y])
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
		
				if(!visited[i][j]&&grid[i][j]=='x')
				{
					dfs(i,j);
					cnt++;
				}
			}
		}
	return cnt;
}
int x = 1 ;
void harry_potter(){
	cin>>n ; 
	m=n ; 
	grid.resize(n); 
	for (int i = 0 ; i<n ; i++)
		{
			for (int j = 0 ; j<n ; j++)
			{
				char c ;
				cin>>c; 
				
				grid[i].pb(c);
			}
		}
	cout<<"Case "<<x++<<": "<<ConnectedComponenetsCnt()<<"\n";
	memset(visited,0,sizeof(visited));
	grid.clear(); 
}
int main()
{
	ZEZOelgamdelynafsoyra7oacpc();
	int t = 1;
	cin>>t ;
	while (t--)harry_potter();
}
