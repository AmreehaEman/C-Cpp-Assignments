#include<iostream>
using namespace std;
main(){
long long mb;
long long a;
cout<<"Enter size in megabytes:";
cin>>mb;
a=mb*1024*1024*8;
cout<<"Megabytes in bits:"<<a;
}