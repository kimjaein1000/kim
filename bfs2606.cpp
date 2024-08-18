// https://www.acmicpc.net/problem/2606
#include <bits/stdc++.h>
using namespace std;

int visited[101];
queue<int> q;
int n,m,u,v;
vector<int>g[101];


int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    q.push(1);
    visited[1]=1;
    int cnt=0;
    while(!q.empty()){
        int v=q.front();
        cnt++;
        q.pop();
        for(auto edge:g[v]){
            if(visited[edge]==0){
                visited[edge]=1;
                q.push(edge);
            }
        }
    }
    cout << cnt-1;
}