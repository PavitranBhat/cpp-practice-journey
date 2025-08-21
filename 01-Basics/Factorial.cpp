#include<iostream>
using namespace std;
int main(){
    int n,fact =1;
    cout << "enter the value for n:";
    cin >>n;
for(int i=1;i<=n;i++)
fact = fact *i;
cout << "factrial of a number is:"<<fact;
return 0;

}