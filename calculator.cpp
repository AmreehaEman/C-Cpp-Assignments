#include <iostream>
using namespace std;

float addition(float num1, float num2);
float subtraction(float num1, float num2);
float multiplication(float num1, float num2);
float division(float num1, float num2);
bool readNumber(float &num);

int main()
{
    float number1, number2;
    char choice;
    while (1)
    {
        cout << "Enter your choice or to exit press Q !" << endl;
        cout << "Enter operator(*, /, +, -):";
        cin >> choice;
        if (choice == 'Q' || choice == 'q')
        {
            break;
        }
        while (true)
        {
            cout << "Enter 1st number:";
            if (readNumber(number1))
                break;
        }

        while (true)
        {
            cout << "Enter 2nd number:";
            if (readNumber(number2))
                break;
        }

        if (choice == '+')
        {
            cout << "Sum is " << addition(number1, number2) << endl;
        }
        else if (choice == '-')
        {
            cout << "Subtraction is " << subtraction(number1, number2) << endl;
        }
        else if (choice == '*')
        {
            cout << "Multiplication is " << multiplication(number1, number2) << endl;
        }
        else if (choice == '/')
        {
            float temp = division(number1, number2);
            if (number2 != 0)
            {
                cout << "Division is " << temp << endl;
            }
        }
        else
        {
            cout << "Wrong Input character!" << endl;
        }
    }
    return 0;
}

// Function for addition
float addition(float num1, float num2)
{
    return num1 + num2;
}

// Function for subtraction
float subtraction(float num1, float num2)
{
    return num1 - num2;
}

// Function for multiplication
float multiplication(float num1, float num2)
{
    return num1 * num2;
}

// Function for division
float division(float num1, float num2)
{
    if (num2 == 0)
    {
        cout << "Error! Invalid Operation." << endl;
        return 0;
    }
    return num1 / num2;
}

// Function to check if input is valid or not
bool readNumber(float &num)
{
    cin >> num;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid number! Try again." << endl;
        return false;
    }
    return true;
}