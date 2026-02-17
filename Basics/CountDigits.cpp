#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    while (n!=0){
        n=n/10;
        x++;
    }
    cout<<x;
}