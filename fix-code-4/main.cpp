#include <iostream>
#include <string>
using namespace std;


float get_temperature(float input) {
  return input * 100;
}

int main() {
  cout << "the temperature should be 6: " << get_temperature(6.0);
}
