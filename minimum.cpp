#include<iostream>
using namespace std;

int mini(int num1, int num2);

int main(){
	int number1, number2;
	cout<<"Enter the first number:";
	cin>>number1;
	cout<<"Enter the second number:";
	cin>>number2;
	int minimum=mini(number1, number2);
	cout<<"The minimum number is : "<<minimum;
	return 0;
}

int mini(int num1, int num2)
{

	return min(num1,num2);

}
