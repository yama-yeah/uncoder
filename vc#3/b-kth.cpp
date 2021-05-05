#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,i;
    cin>>a>>b;
    int k;
    cin>>k;
    for(i=min(a,b);c!=k;i--){
        if(a%i==0&&b%i==0){
            c++;
        }
    }
    cout<<i+1<<endl;
    return 0;
}