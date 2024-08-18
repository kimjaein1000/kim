// https://www.acmicpc.net/problem/11729
#include <iostream>
using namespace std;
int x,arr[25];
void hanoi(int n){
    if(n==1){
        if(x%2==1){
            if(arr[n]==1){cout << "1 3\n";arr[n]=3;}
            else if(arr[n]==2){cout << "2 1\n";arr[n]=1;}
            else{cout << "3 2\n";arr[n]=2;}}
        else{
            if(arr[n]==1){cout << "1 2\n";arr[n]=2;}
            else if(arr[n]==2){cout << "2 3\n";arr[n]=3;}
            else{cout << "3 1\n";arr[n]=1;}
        }
        return;
    }
    hanoi(n-1);
    if((x-n)%2==0){
        if(arr[n]==1){cout << "1 3\n";arr[n]=3;}
        else if(arr[n]==2){cout << "2 1\n";arr[n]=1;}
        else{cout << "3 2\n";arr[n]=2;}
    }
    else{
        if(arr[n]==1){cout << "1 2\n";arr[n]=2;}
        else if(arr[n]==2){cout << "2 3\n";arr[n]=3;}
        else{cout << "3 1\n";arr[n]=1;}
    }
    hanoi(n-1);
}
int main(){
    cin >> x;
    for(int i =1;i < x+1;i++){arr[i]=1;}
    int m=1;
    for(int i =0;i < x-1;i++){m*=2;m++;}
    cout << m << endl;
    hanoi(x);
}