#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    while (n!=0){
        x=n%10+x*10;
        n=n/10;
    }
    cout<<x;
}