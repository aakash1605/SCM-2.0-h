#include<iostream>
using namespace std;
int main(){
    char a='h';
    cout<<sizeof(a)<<endl;

    float f=1.2;
    cout<<sizeof(f)<<endl;

    double g=1.2552;
    cout<<sizeof(g)<<endl;
    cout<<g<<endl;

    char ch=123456;
    cout<<ch<<endl;
    int m,n,j,l,ll,lll,llll;
    m=4;
    n=89;
    j=752;
    
    l=m+n;
    cout<<l<<endl;

    ll=m<n;
    cout<<ll<<endl;

    return 0;
}