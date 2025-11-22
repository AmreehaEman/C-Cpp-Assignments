#include<iostream>
using namespace std;

string checkAlphabetCase(char num);

main()
{
	char alphabet;
	cout<<"Enter a character(A/a): ";
	cin>>alphabet;
	cout<<""<<checkAlphabetCase(alphabet);
}

string checkAlphabetCase(char num)
{
	string update;
	if(num=='a')
	update="You have entered Small a";
	if(num=='A')
	update="You have entered Capital A";
	return update;
}