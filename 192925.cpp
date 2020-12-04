#include <iostream>
#include <string>

using namespace std;

int readAddSubtractMultiplyNumber() {
    int number = 0;
    int operationNumber;
    string operation;
    while (cin >> operation) {
        cin >> operationNumber;
        if (operation == "add") {
            number += operationNumber;
        }
        if (operation == "subtract") {
            number -= operationNumber;
        }
        if (operation == "multiply") {
            number *= operationNumber;
        }
    }
    return number;
}

int main()
{
    cout << readAddSubtractMultiplyNumber();
    return 0;
}

