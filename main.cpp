#include <iostream>
using namespace std;

int main() {
  // init
  int number1;
  int number2;
  char operation;

  // input
  cout << "Enter the first number: ";
  cin >> number1;
  cout << "Enter the operator(+,-,*,/): ";
  cin >> operation;
  cout << "Enter the second number: ";
  cin >> number2;

  // output
  switch (operation) {
  case '+':
    cout << number1 << " + " << number2 << " = " << number1 + number2;
    break;
  case '-':
    cout << number1 << " - " << number2 << " = " << number1 - number2;
    break;
  case '*':
    cout << number1 << " * " << number2 << " = " << number1 * number2;
    break;
  case '/':
    if (number2 == 0) {
      cout << "Error: Division by zero";
      return 1;
    }
    cout << number1 << " / " << number2 << " = " << number1 / number2;
    break;
  default:
    cout << "Error: Invalid operator";
    return 1;
  }

  return 0;
}