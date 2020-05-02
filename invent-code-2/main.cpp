#include <iostream>
#include <string>
using namespace std;

int GetInputNumber(){
  cout << "Enter an interger: ";
  int number;
  cin >> number;
  return number;
}

string GetInputOperator(){
  cout << "Enter an operator: ";
  char op;
  cin >> op;
  return op;
}

int RunningTotal(){
  if (operator == '+') {
    running_total = running_total + second_number;
  }
  if (operator == '%') {
    running_total = running_total % next_number;
  }
  if (operator == '*') {
    running_total = running_total * next_number;
  }
  if (operator == '/') {
    running_total = running_total / next_number;
  }
  return running_total;
}

int main() {
  int running_total = 0;
  int first_number = GetInputNumber();
  char operator = GetInputOperator();
  running_total = RunningTotal(operator);

  int second_number = GetInputNumber();
  char operator = GetInputOperator(); 
  running_total = RunningTotal(operator); 

  int third_number = GetInputNumber();
  char operator = GetInputOperator();  
  running_total = RunningTotal(operator);

  int fourth_number = GetInputNumber();
  char operator = GetInputOperator();  
  running_total = RunningTotal(operator);

  int fifth_number = GetInputNumber();
  char operator = GetInputOperator();
  running_total = RunningTotal(operator);

  int sixth_number = GetInputNumber();
  char operator = GetInputOperator();
  running_total = RunningTotal(operator);

  int seventh _number = GetInputNumber();
  running_total = RunningTotal(operator);

  cout << " = " << running_total << endl;
}
