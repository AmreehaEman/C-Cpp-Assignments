#include <iostream>
#include <cmath>
using namespace std;

float numsqrt(float b);

int main()
{
	float num, square;
	cout << "Enter a number:";
	cin >> num;
	square = numsqrt(num);
	cout << "The square root of number " << num << " is " << square;
}

float numsqrt(float b)
{
	return sqrt(b);
}