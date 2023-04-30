#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans="ABC";
    int n,j=0,sum=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s.at(i)==ans.at(j)){
            if(j<2){
                j++;
            }
            else{
                sum++;
                j=0;
            }
        }
        else{
            j=0;
        }
    }
    cout<<sum<<endl;
    return 0;
}