#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    char temp;
    temp=a.at(0);
    a.at(0)=a.at(1);
    a.at(1)=a.at(2);
    a.at(2)=temp;
    cout<<a;
    return 0;
} // namespace name
