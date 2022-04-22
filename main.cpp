#include <bits/stdc++.h>
using namespace std;

short i=0;
string Username,Password;

string User[100];
string Pass[100];

void Register();
void Login();

int main() {
    short number;
    while(true){
        cout<<"Choose: \n";
        cout<<1<<". Register \n";
        cout<<2<<". Login: \n";
        cout<<3<<". Exit: \n";
        cin>>number;
        if(number==1){
            Register();
        }
        else if(number==2){
            Login();
        }
        else break;
    }
}

void Register(){
    cout<<"Type username: ";
    cin>>Username;
    cout<<"Type password: ";
    cin>>Password;
    cout<<endl;
    User[i]=Username;
    Pass[i++]=Password;
    cout<<"You have succesfully registered!\n";
}
void Login(){
    cout<<"Type username: ";
    cin>>Username;
    cout<<"Type password: ";
    cin>>Password;
    cout<<endl;
    short j,check=0;
    for(j=0;j<100;++j)
        if(User[j]==Pass[j]){check=1;break;}
    if(check==1)cout<<"Access Granted!\nYou are Welcome... "<<Username<<endl<<endl;
    else cout<<"Access Denied!\nTry again later... \n";
}