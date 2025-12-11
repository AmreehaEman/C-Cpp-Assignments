#include <iostream>
#include <cmath>
using namespace std;

float power(float a, float b);

int main()
{
	system("cls");
	float num1, num2, answer;
	cout << "Enter the base number: ";
	cin >> num1;
	cout << "Enter the exponential number: ";
	cin >> num2;
	answer = power(num1, num2);
	cout << "" << num1 << " raise to power " << num2 << " is " << answer;
	return 0;
}

float power(float a, float b)
{

	return pow(a, b);
}
