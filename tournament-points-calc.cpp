#include<iostream>
using namespace std;
main(){
int win,lose,draw,point=0;
cout<<"Enter the number of wins:";
cin>>win;
point=win*3;

cout<<"Enter the number of losses:";
cin>>lose;

cout<<"Enter the number of draw:";
cin>>draw;
point=point+draw;
cout<<"Pakistan has Obtained "<<point<<" in the Asia Cup Tournament";
}