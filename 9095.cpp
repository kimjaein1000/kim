// https://www.acmicpc.net/problem/9095
#include <iostream>
int cnt=0;
int n;
void f(int c){
    if(c==n){
        cnt++;
        return;
    }
    if(c>n){
        return;
    }
    f(c+1);
    f(c+2);
    f(c+3);
}
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i =0;i < t;i++){
        cin >> n;
        f(0);
        cout << cnt << endl;
        cnt=0;
    }
}