#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
  cout << "Enter an interger to calculate the factorial of: ";
  int input;
  cin >> input;
  return input;
}

int Factorial(int fact){
  if (fact == 0){
    return 1;
  }
  return fact * Factorial(fact - 1);
}

int main() {
  int number = GetUserInput();
  int factorial = Factorial(number);

  if (number > 0){ 
    cout << "The factorial of " << number << " is " << factorial << endl;
  }

  else {
    cout << "The number does not have a valid factorial.";
  }
  return 0;
}
