#include<iostream>
using namespace std;
float takeout(float account , float withdraw){
if (account >= withdraw ){
    cout<<"money withdraw = "<<withdraw<<endl;
}else if (account < withdraw ){
    cout<<"your account don't have sufficient amount to take out please deposit first."<<endl;
}
cout <<"amount left in account "; return account - withdraw ;
}
float moneyin(float account , float deposit){
    cout<<"your entered ammount is added to your ammount.";
    cout<<"now your account has"; return account + deposit;
}
int main(){
float account = 10000 ;
float deposit ;
float withdraw ;
char check ;
cout<<"enter withdraw (w) or deposit(d) or check amount (c) for respective action : ";
cin>>check;
while (check != 'e')
{
    if(check == 'w'){
    cout<<"how much you want to withdraw : ";
cin>>withdraw;
    cout<< takeout(account , withdraw);
}else if (check == 'd'){
    cout<<"how much you want to deposit : ";
    cin>>deposit;
    cout<< moneyin(account , deposit);
}else if (check = 'c'){
    cout<<"your account has "<< account << " amount" << endl;
}else{
    cout<<"Invalid input";
}
}
    return 0 ;
}