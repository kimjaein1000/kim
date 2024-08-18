#include <iostream>
#include <vector>
using namespace std;
int res=0;
vector<pair<int,int>> v;
int main(){
    int n,m,x,y,x1,y1;
    cin >> n >> m;
    for(int i = 0;i < m;i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    for(int i = 0;i < m;i++){
        x=v[i].first;
        y=v[i].second;
        for(int j= 0;j<m;j++){
            if(v[j].first==x||v[j].first==y||v[j].second==x||v[j].second==y)continue;
            x1=v[j].first;y1=v[j].second;
            for(int k = 0;k < m;k++){
                if(v[k].first==y&&v[k].second==x1){
                    for(int l = 0;l < m;l++){
                        if(v[l].first==y1){
                            if(v[l].second!=x&&v[l].second!=y&&v[l].second!=x1){cout << 1;return 0;}
                        }
                    }
                }
            }
        }
    }
    cout << 0;
    return 0;
}