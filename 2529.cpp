// https://www.acmicpc.net/problem/2529
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n;
string s;
vector<string> v;
int c[10];
int find_if_it_is_good(string num){
    for(int i = 0;i < n;i++){
        char ch=num[i];
        int a=(int)ch-48;
        ch=num[i+1];
        int b=(int)ch-48;
        if(s[i]=='<'){
            if(a>b)return 0;
        }
        else{
            if(b>a)return 0;
        }
    }
    return 1;
}
void f(int i,string num){
    if(i==n+1){
        if(find_if_it_is_good(num))
            v.push_back(num);
        return;
    }
    for(int j = 0;j < 10;j++){
        if(!c[j]){
            c[j]=1;
            f(i+1,num+to_string(j));
            c[j]=0;
        }
    }
}
int main(){
    cin >> n;
    char cc;
    for(int i =0;i < n;i++){
        cin >> cc;
        s+=cc;
    }
    f(0,"");
   cout << v[v.size()-1] << '\n' << v[0];
}