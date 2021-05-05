#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s(3);
    vector<int> n(3);
    int i,j,sum=0;
    cin>>s.at(0)>>s.at(1)>>s.at(2);
    char m=s.at(0).at(0);
    for(i=0;i<3;i++){
        n.at(i)=0;
        for(j=0;j<s.at(i).size();j++){
            m=min(s.at(i).at(j),m);
        }
    }
    for()
    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            for(int k=0;k<s.at(j).size();k++){
                if(m==s.at(j).at(k)){
                    n.at(j)+=pow(10,k)*i;
                }
                else{
                    n.at(j)+=pow(10,k)*(s.at(j).at(k)-m+i);
                }
            }
        }
        if(n.at(0)+n.at(1)==n.at(2)){
            break;
        }
        else{
            n.at(0)=0;
            n.at(1)=0;
            n.at(2)=0;
        }
    }
    for(i=0;i<3;i++)
        cout<<n.at(i)<<endl;
    return 0;
}