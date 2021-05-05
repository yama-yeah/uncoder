#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i;
    cin>>n;
    for(i=9;i>0;i--){
        if(n/i<10&&n%i==0){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}