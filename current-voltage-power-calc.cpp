#include<iostream>
using namespace std;
main(){
float power,current,voltage;
cout<<"Enter current (A):";
cin>>current;
cout<<"Enter voltage(V):";
cin>>voltage;
power=current*voltage;
cout<<"power is "<<power<<"watts";
}