#include<iostream>
using namespace std;
int main()
{
    int p,r,t;
    cout <<"enter the principle";
    cin >>p;
    cout << "enter the rate";
    cin >> r;
    cout << "enter the time";
    cin >> t;

    int simpleInterest;
    simpleInterest = (p*t* r)/100;
    cout <<"simple interset is:"<<simpleInterest;
    return 0;


    
} 
