#include <iostream>
using namespace std;
bool pal(int n){
    int t=n,r=0;
    while(t){
        r=r*10+t%10;
        t/=10;
    }
    return r==n;
}
int main(){
    int n;
    cin>>n;
    cout<<(pal(n)?"Palindrome":"Not Palindrome");
}