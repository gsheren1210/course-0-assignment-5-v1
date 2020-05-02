#include <iostream>
#include <string>
using namespace std;

int GetInputNumber(){
  cout << "Enter an interger: ";
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
  int running_total = GetInputNumber();
  char sign = GetInputOperator();

  int current_number = GetInputNumber();
  sign = GetInputOperator(); 
  running_total = RunningTotal(running_total, current_number, sign); 

  current_number = GetInputNumber();
  //char operator = GetInputOperator();  
  running_total = RunningTotal(running_total, current_number, sign);
/*
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
  running_total = RunningTotal(operator);*/

  cout << " = " << running_total << endl;
}
