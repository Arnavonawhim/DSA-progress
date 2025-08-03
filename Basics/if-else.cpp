#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin >> m;
    if(m>=90){
        cout<<endl<<"Grade A";
    }
    else if(m>=70){
        cout<<endl<<"Grade B";
    }
    else if(m>=50){
        cout<<endl<<"Grade C";
    }
    else{
        cout<<endl<<"Grade D";
    }
}