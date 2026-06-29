#include<iostream>
using namespace std;
int main(){
    int ans,score=0;
    cout<<"1. Capital of India?\n1.Mumbai 2.Delhi 3.Kolkata 4.Chennai\n";
    cin>>ans;
    if(ans==2) score++;
    cout<<"2. 5+7=?\n1.10 2.11 3.12 4.13\n";
    cin>>ans;
    if(ans==3) score++;
    cout<<"3. C++ is a?\n1.Language 2.Game 3.Browser 4.OS\n";
    cin>>ans;
    if(ans==1) score++;
    cout<<"Score = "<<score<<"/3";
    return 0;
}