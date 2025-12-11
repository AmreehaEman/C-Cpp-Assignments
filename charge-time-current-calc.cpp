#include<iostream>
using namespace std;
main(){
float current,charge,time;
cout<<"Enter charge(Q):";
cin>>charge;
cout<<"Enter time(T):";
cin>>time;
current=charge/time;
cout<<"Current(I) is "<<current<<"Amperes";
}