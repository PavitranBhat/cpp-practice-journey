#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the charcter:";
    cin>>ch;
    if(ch >='a' && ch<='z'){
        cout<<"lower case letter";
    }else{
        cout<<"uppercase letter:";
    }


    return 0;
}