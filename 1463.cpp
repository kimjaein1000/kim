//https://www.acmicpc.net/problem/1463
#include <bits/stdc++.h>
using namespace std;
int memo1[1000002];
int f(int n){
    if(n==1){
        return 0;
    }
    /*동적 계획법*/if(memo1[n]!=0){
        return memo1[n];
    }
    int x1=10000000,x2;
    if(n%3==0){
        x2=f(n/3)+1;
        if(x2<x1)x1=x2;
    }
    if(n%2==0){
        x2=f(n/2)+1;
        if(x2<x1)x1=x2;
    }
    x2=f(n-1)+1;
    if(x2<x1)x1=x2;
    memo1[n]=x1;
    return x1;
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
}