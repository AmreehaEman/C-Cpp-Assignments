#include <iostream>
using namespace std;
float fuel(float length);
int main()
{
	float distance, requirement;
	cout << "Enter distance: ";
	cin >> distance;
	requirement = fuel(distance);
	cout << "Fuel needed: " << requirement;
	return 0;
}

float fuel(float length)
{
	return length * 10;
}