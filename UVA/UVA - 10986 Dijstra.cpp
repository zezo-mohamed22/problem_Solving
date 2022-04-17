#include<bits/stdc++.h>
using namespace std;
#define sz(v) v.size()
#define endl "\n"
typedef long long ll;
void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
#endif
}
int n ,m ;
vector<vector<pair<int,int>>>adj ;
int dijstra(int src, int ds){
    vector<int>dis(n+10,-1);
    set<pair<int,int>>st;
    st.insert({0,src});
    while (!st.empty()){
        auto it = *st.begin();
        st.erase(it);
        int node = it.second , cost = it.first ;
        if(dis[node] != -1)    continue;
        dis[node]=cost;
        for (auto edge: adj[node]){
            if(dis[edge.first]==-1){
                st.insert({edge.second+cost,edge.first});
            }
        }
    }
    return dis[ds];
}
int main(){
    fast();
    int t =1;
    cin>>t ;
    int tc= 1;
    while (t--) {
        int src , dis ;
        cin>>n>>m ;
        cin>>src>>dis;
        adj=vector<vector<pair<int,int>>>(n+9);
        for (int i = 0 ; i<m ; i++){
            int u , v , cost ;
            cin>>u>>v>>cost ;
            adj[u].push_back({v,cost});
            adj[v].push_back({u,cost});
        }
        cout<<"Case #"<<tc++<<": "<<(to_string(dijstra(src,dis))=="-1"?"unreachable":to_string(dijstra(src,dis)))<<'\n';
    }
}