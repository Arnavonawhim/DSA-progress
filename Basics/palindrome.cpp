#include<bits/stdc++.h>
using namespace std;
int main(){
        int x;
        cin>>x;
        int n=0,d,o=x;
        int Max = 2147483647;
        int Min = -2147483648;
        while (x!=0){
            d=x%10;
            x=x/10;
            if(n>Max/10 || (n==Max/10 && d > 7))
                return 0;
            if(n<Min/10 || (n==Min/10 && d < -8))
                return 0;
            n=d+n*10;
        }
        
        if(o==n && o>=0){
            cout<<"true";
        }else{
            cout<<"false";
        }
            
    }