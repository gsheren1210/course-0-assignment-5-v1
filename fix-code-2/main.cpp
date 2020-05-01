#include <iostream>
#include <string>
using namespace std;

string get_temperature() {
  cout << "Enter the temperature: ";
  string temperature;
  cin >> temperature;
  return temperature + " celcius";
}

int main() {
  string temp = get_temperature();
  cout << temp;
}
