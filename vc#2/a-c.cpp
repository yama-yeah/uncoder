#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    s.at(k-1)=s.at(k-1)+32;
    cout<<s<<endl;
    return 0;
} // namespace std;