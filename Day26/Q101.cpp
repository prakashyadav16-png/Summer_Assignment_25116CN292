#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int num=rand()%100+1,guess;
    cout<<"Guess Number (1-100)\n";
    do{
        cin>>guess;
        if(guess>num) cout<<"Too High\n";
        else if(guess<num) cout<<"Too Low\n";
        else cout<<"Correct";
    }while(guess!=num);
    return 0;
}