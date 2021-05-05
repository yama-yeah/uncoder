#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int ans=0,w;
    for(int i=1;i<=n;i++){
        w=i;
        while(w!=0){
            w/=10;
            c++;
        }
        if(c%2!=0){
            ans++;
        }
        c=0;
    }
    cout<<ans<<endl;
    return 0;
}