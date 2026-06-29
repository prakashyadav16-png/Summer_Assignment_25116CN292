#include <iostream>
using namespace std;
int main(){
    int n,a[100],s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    cout<<s<<"\n"<<(float)s/n;
}