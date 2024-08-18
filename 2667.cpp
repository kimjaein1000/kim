// https://www.acmicpc.net/problem/2667
#include <bits/stdc++.h>
using namespace std;

int route[26][26];
int visited[26][26];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,cnt=1;
int counter[1000];
void dfs(int y,int x){
    visited[y][x]=cnt;
    counter[cnt]++;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(0<=nx&&nx<n&&0<=ny&&ny<n){
            if(route[ny][nx]==1&&visited[ny][nx]==0){
                dfs(ny,nx);
            }
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1d",route[i]+j);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(route[i][j]==1&&visited[i][j]==0){
                dfs(i,j);
                cnt++;
            }
        }
    }
    printf("%d\n",cnt-1);
    sort(counter,counter+(cnt));
    for(int i = 1;i < cnt;i++){
        cout << counter[i] << endl;
    }
}