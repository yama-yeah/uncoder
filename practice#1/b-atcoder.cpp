#include<bits/stdc++.h>
using namespace std;
int main()
{
    string key,atc="ACGT";
    int ans=0,sum=0;
    bool f=true;
    cin>>key;
    for(int i=0;i<key.size();i++){
        for(int j=0;j<4;j++){
            if(atc.at(j)==key.at(i)){
                sum++;
                f=false;
                break;
            }
            else{
                f=true;
            }
        }
        if(f==true){
            sum=0;
        }
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}