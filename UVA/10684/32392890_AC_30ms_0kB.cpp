/*Make ur Family always proud

while (!achieve acpc)
{
keep practice always and help another people to achieve it}
*/
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
#include <stack>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> element;
typedef vector<ll> longelem;
void ZEZO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
}
struct itm 
{
	int time , alice , bob ; 
};
void harry_potter(){
   int n ; 
   while(cin>>n,n)
   {
      int x ,sum=0,mx=0; 
      while (n--){
      cin>>x ;
      mx=max(mx,sum+=x); 
      if (sum<0)
         sum=0; 
      }
      if (sum>0)
      {
         cout<<"The maximum winning streak is "<<mx<<".\n"; 
      }
      else 
      cout<<"Losing streak.\n";
      
   }
   
}
int main()
{
	ZEZO();
	int T = 1; ;
	while (T--)
	{

		harry_potter();
	}
	return 0 ; 
}