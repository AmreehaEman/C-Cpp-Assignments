#include<iostream>
using namespace std;
main(){
int population,birthRate;
cout<<"Enter the current world population:";
cin>>population;
cout<<"Enetr the monthly birth rate:";
cin>>birthRate;
int n=population+(birthRate*360);
cout<<"The population in three decades will be: "<<n;
}