#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    count=(int)(log10(n)+1);
    cout<<count;
}