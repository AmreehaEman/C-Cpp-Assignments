
//This code is written to check whether a aumber is symmetrical or not

#include<iostream>
using namespace std;

int IsSymmetrical(int digits);

int main()
{
	int number,reverse;
	cout<<"Enter a three digit number: ";
	cin>>number;
	reverse=IsSymmetrical(number);
	if(number==reverse)
	cout<<"The number is symmetrical";

	if(number!=reverse)
	cout<<"The number is not symmetrical";

}


int IsSymmetrical(int digits)
{

// Purpose: Function extracts digits, reverses their order, and returns the reversed number.

	int n1,n2,n3;
	n1=digits/100;
	n2=digits%100;
	n3=n2/10;
	n2=n2%10;
	int reversed_b = (n2 * 100) + (n3 * 10) + (n1 * 1);
	return reversed_b;


}