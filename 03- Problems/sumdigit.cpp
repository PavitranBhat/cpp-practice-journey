#include<iostream>
using namespace std;
int digitsum(int num){
    int digitsum=0;
    while(num >0){
        int sum=num%10;
        num=num/10;
        digitsum +=sum;
 }
 return digitsum;
}
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    cout<< "digitsum ="<< digitsum(num);

    return 0;
}