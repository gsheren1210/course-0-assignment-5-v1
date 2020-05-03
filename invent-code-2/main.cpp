#include <iostream>
#include <string>
using namespace std;

int GetInputNumber(){
  cout << "Enter a number: ";
  int number;
  cin >> number;
  return number;
}

char GetInputOperator(){
  cout << "Enter an operator: ";
  char sign;
  cin >> sign;
  return sign;
}

int RunningTotal(int running_total, int current_number, char sign){
  if (sign == '+') {
    running_total = running_total + current_number;
  }
  if (sign == '-') {
    running_total = running_total - current_number;
  }
  if (sign == '%') {
    running_total = running_total % current_number;
  }
  if (sign == '*') {
    running_total = running_total * current_number;
  }
  if (sign == '/') {
    running_total = running_total / current_number;
  }
  return running_total;
}

int main() {
  //first number
  int running_total = GetInputNumber();
  char sign = GetInputOperator();
  //second number
  int current_number = GetInputNumber();
  running_total = RunningTotal(running_total, current_number, sign); 
  //third number
  sign = GetInputOperator(); 
  current_number = GetInputNumber(); 
  running_total = RunningTotal(running_total, current_number, sign);
  //fourth number
  sign = GetInputOperator(); 
  current_number = GetInputNumber(); 
  running_total = RunningTotal(running_total, current_number, sign);
  //fifth number
  sign = GetInputOperator(); 
  current_number = GetInputNumber(); 
  running_total = RunningTotal(running_total, current_number, sign);
  //sixth number
  sign = GetInputOperator(); 
  current_number = GetInputNumber(); 
  running_total = RunningTotal(running_total, current_number, sign);
  //seventh number
  sign = GetInputOperator(); 
  current_number = GetInputNumber(); 
  running_total = RunningTotal(running_total, current_number, sign);

  cout << " = " << running_total << endl;
}
