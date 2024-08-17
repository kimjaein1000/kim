//https://www.acmicpc.net/problem/14889
#include <iostream>
using namespace std;
int n,s[20][20],m=10000;
void func(int* a,int* b){
    int x=0,y=0;
    for(int i = 0;i < n/2;i++){
        for(int j = 0;j < n/2;j++){
            if(i!=j){
                x+=s[a[i]][a[j]];
                y+=s[b[j]][b[i]];
            }
        }
    }
    if(x>y){
        int t;
        t=x;
        x=y;
        y=t;
    }
    y-=x;
    if(y<m)m=y;
}
void f(int i,int a[],int x,int b[],int y){
    if(i==n){
        func(a,b);return;}
    if(x<n/2){
        a[x]=i;
        f(i+1,a,x+1,b,y);
    }
    if(y<n/2){
        b[y]=i;
        f(i+1,a,x,b,y+1);
    }
}
int main(){
    cin >> n;
    for(int i =0;i < n;i++){
        for(int j = 0;j<n;j++){
            cin >> s[i][j];
        }
    }
    int a[10]={0},b[10]={0};
    f(0,a,0,b,0);
    cout << m;
}