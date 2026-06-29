#include<iostream>
using namespace std;
int main(){
    int ch;
    float bal=5000,amt;
    do{
        cout<<"\n1.Balance\n2.Deposit\n3.Withdraw\n4.Exit\n";
        cin>>ch;
        if(ch==1) cout<<"Balance = "<<bal;
        else if(ch==2){cin>>amt;bal+=amt;}
        else if(ch==3){
            cin>>amt;
            if(amt<=bal) bal-=amt;
            else cout<<"Insufficient Balance";
        }
    }while(ch!=4);
    return 0;
}