// https://www.acmicpc.net/problem/1759
#include <iostream>
#include <string>
using namespace std;
int l,c;
string s;
void f(string str,int i,int e){
    if(e==l){
        int c1=0,c2=0;
        for(int k= 0;k < e;k++){
            if(str[k]=='a'||str[k]=='i'||str[k]=='e'||str[k]=='o'||str[k]=='u')c1++;
            else c2++;
        }
        if(c1>=1&&c2>=2)
            cout << str << endl;
        return;
    }
    if(i==c)return;
    f(str+s[i],i+1,e+1);
    f(str,i+1,e);
}
int main(){
    cin >> l >> c;
    for(int i= 0;i < c;i++){
        cin >> s[i];
    }
    for(int i=0;i<c;i++){
        for(int j=i;j<c;j++){
            if((int)s[i]>(int)s[j]){
                char q=s[i];
                s[i]=s[j];
                s[j]=q;
            }
        }
    }
    f("",0,0);
}