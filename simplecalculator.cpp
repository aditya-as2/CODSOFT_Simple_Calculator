#include <bits/stdc++.h>
using namespace std;

int main()
{
    double opd1, opd2, result;
    char opt;
    cout << "\n\n\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t|                                         |" << endl;
    cout << "\t\t\t\t|       - Arithematic Calculator -        |" << endl;
    cout << "\t\t\t\t|                                         |" << endl;
    cout << "\t\t\t\t-------------------------------------------" << endl;

m:

    cout << "\n\t\t\t\tEnter first operand: ";
    cin >> opd1;
    cout << "\n\t\t\t\tEnter an operator (+, -, * or /): ";
    cin >> opt;
    cout << "\n\t\t\t\tEnter second operand: ";
    cin >> opd2;
    cout << "\n";

    switch (opt)
    {
    case '+':
        result = opd1 + opd2;
        break;
    case '-':
        result = opd1 - opd2;
        break;
    case '*':
        result = opd1 * opd2;
        break;
    case '/':
        result = opd1 / opd2;
        break;
    default:
        cout << "\t\t\t\t-------------------------------------------\n\n";
        cout << "\t\t\t\t       Please enter a valid operator!\n\n";
        cout << "\t\t\t\t-------------------------------------------";
        goto m;
    }
    cout << "\t\t\t\t-------------------------------------------\n\n";
    cout << "\t\t\t\tThe result is " << result << "\n\n";

n:

    int decision;

    cout << "\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t|                                         |" << endl;
    cout << "\t\t\t\t|           1) Calculate again            |" << endl;
    cout << "\t\t\t\t|                                         |" << endl;
    cout << "\t\t\t\t|           2) Exit                       |" << endl;
    cout << "\t\t\t\t|                                         |" << endl;
    cout << "\t\t\t\t-------------------------------------------" << endl;

    cout << "\n\t\t\t\tEnter your choice: ";
    cin >> decision;
    switch (decision)
    {
    case 1:
        goto m;
        break;
    case 2:
        cout << "\n\n";
        return 0;
    default:
        cout << "\n\t\t\t\tPlease enter a valid choice!\n\n";
        goto n;
    }
    return 0;
}