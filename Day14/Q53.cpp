#include <iostream>
using namespace std;
int main(){
    int n,a[100],x,p=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>x;
    for(int i=0;i<n;i++)
    if(a[i]==x){
        p=i;
        break;
    }
    cout<<p;
}