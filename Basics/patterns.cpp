#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,p=0;
    
    for(i=6;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
    {
        for(k=1;k<=p;k++){
            cout<<" ";
        }p+=2;
    }
    for(int s=i;s>=1;s--){
            cout<<"*";
        }cout<<endl;
    }
    

    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(k=1;k<=p;k++){
            cout<<" ";
        }p-=2;
     
    for(int s=1;s<=i;s++){
            cout<<"*";
        }cout<<endl;   
    }
    
}
