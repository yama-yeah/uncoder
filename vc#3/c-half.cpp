#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,sum=0;
    int cx=0,cy=0;
    cin>>a>>b>>c>>x>>y;
    if((float)a/2+(float)b/2<=c){
        sum=x*a+y*b;
    }
    else{
        if(x>y){
            if(a>2*c){
                sum=x*2*c;
            }
            else{
                sum+=y*2*c+(x-y)*a;
            }
        }
        else{
            if(b>2*c){
                sum=y*2*c;
            }
            else{
                sum+=x*2*c+(y-x)*b;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}