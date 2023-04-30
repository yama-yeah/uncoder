#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    string work1,work2;
    char w;
    int q;
    cin>>n;
    cin>>s;
    cin>>q;
    work1=s.substr(0,n);
    work2=s.substr(n);
    int i;
    int t,a,b;
    for(i=0;i<q;i++){
        scanf("%d %d %d",&t,&a,&b);
        if(t==1){
            a=a-1;
            b=b-1;
            if(a>=n){
                a-=n;
                b-=n;
                w=work2.at(a);
                work2.at(a)=work2.at(b);
                work2.at(b)=w;
            }
            else if(b>=n){
                b-=n;
                w=work1.at(a);
                work1.at(a)=work2.at(b);
                work2.at(b)=w;
            }
            else{
                w=work1.at(a);
                work1.at(a)=work1.at(b);
                work1.at(b)=w;
            }
        }
        else{
            swap(work1,work2);
        }
    }
    cout<<work1+work2<<endl;
    return 0;
}