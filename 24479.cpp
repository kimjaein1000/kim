#include <bits/stdc++.h>
using namespace std;
int n,m,r;
int visited[10000001];
vector<int> g[1000001];
int V[10000001];int cnt=1;
void dfs(int r){
    visited[r] = 1;
    V[r]=cnt++;
    auto e=g[r];
    sort(e.begin(),e.end());
    for(int edge:e){
        if(visited[edge]==0){
            dfs(edge);
        }
    }
}
int main(){
    cin>> n >> m >> r;
    for(int i= 0;i < m;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(r);
    for(int i = 1;i <= n;i++)cout << visited[i] << endl;
}
/*int visit[200000];
vector<int> v[100000],v2;
void dfs(int vv,int e,int r){
    visit[r]=1;
    for(int i = 0;i < 1;i++){}
}
int main(){
    int n,m,r;
    cin >> n >> m >> r;
    for(int i =0;i < m;i++){
        int u,w;
        cin >> u >> w;
        v[u].push_back(w);
        v[w].push_back(u);
    }
    for(int i = 1;i < n+1;i++){
        v2.push_back(i);
    }

}*/