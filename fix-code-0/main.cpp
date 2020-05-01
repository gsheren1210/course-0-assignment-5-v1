#include <iostream>
#include <string>
using namespace std;

int getAge() {
  return 4;
}

float get_temperature() {
  return 120.3;
}

int main() {
  cout << "The temperature is: " << get_temperature() << endl;
  cout << "The age is: " << getAge() << endl;
}
