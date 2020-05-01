#include <iostream>
#include <string>
using namespace std;

string AddPrefix(const string str) {
  return "pre" + str;
}

int main() {
  string s;
  cout << "Please type a word: ";
  cin >> s;
  cout << "Your word with pre added is: " << AddPrefix(s);
}
