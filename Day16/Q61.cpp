#include<iostream>
using namespace std;
int main(){
    int n,a[100],s=0;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        s+=a[i];
    }
    cout<<n*(n+1)/2-s;
}