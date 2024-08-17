// https://www.acmicpc.net/problem/14501
#include <iostream>
using namespace std;
int n,t[20],p[20],maxmoney=0;
void f(int i,int m){
    if(i==n){
        if(maxmoney<m)maxmoney=m;
        return;
    }
    if(i+t[i]>n){
        if(maxmoney<m)maxmoney=m;
        f(i+1,m);
        return;
    }
    f(i+t[i],m+p[i]);
    f(i+1,m);
}
int main(){
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> t[i] >> p[i];
    }
    f(0,0);
    cout << maxmoney;
}