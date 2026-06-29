#include <iostream>
using namespace std;
int main(){
    int n,t,d=0,s=0;
    cin>>n;
    t=n;
    while(t){
        d++;
        t/=10;
    }
    t=n;
    while(t){
        int r=t%10,p=1;
        for(int i=0;i<d;i++)
        p*=r;s+=p;t/=10;
    }
    cout<<(s==n?"Armstrong":"Not Armstrong");
}