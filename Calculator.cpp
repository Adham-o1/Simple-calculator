#include <iostream>
using namespace std;

int main ()
{
    cout << "================\n";
    cout << "===Calculator===\n";
    cout << "================\n";

    double num1, num2;
    char op;

    cout << "Enter Num [1] : ";
    cin >> num1;
    cout << "Enter the arithmetic operation : ";
    cin >> op;
    cout << "Enter Num [2] : ";
    cin >> num2;

    switch (op)
    {
        case '+':
            cout << "=============\n";
            cout << num1 << " + " << num2 << " = " << num1 + num2 <<endl;
            cout << "=============\n";
            break;
        case '-':
            cout << "=============\n";
            cout << num1 << " - " << num2 << " = " << num1 - num2 <<endl;
            cout << "=============\n";
            break;
        case '*':
            cout << "=============\n";
            cout << num1 << " * " << num2 << " = " << num1 * num2 <<endl;
            cout << "=============\n";
            break;
        case '/':
            cout << "=============\n";
            cout << num1 << " / " << num2 << " = " << num1 / num2 <<endl;
            cout << "=============\n";
            break;
        default:
            cout << "Error\n";
            break;
    }
    return 0;
}