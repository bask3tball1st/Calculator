#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void action(char operat, double a, double b) {
  if (operat == '+') {
    cout << "Result: " << a + b << endl;
    return;
  }
  if (operat == '-') {
    cout << "Result: " << a - b << endl;
    return;
  }
  if (operat == '*') {
    cout << "Result: " << a * b << endl;
    return;
  }
  if (operat == '/') {
    cout << "Result: " << a / b << endl;
    return;
  }
  return;
}

int main() {
  string buffer;
  char operation;
  double a, b;
  cin >> buffer;
  stringstream buffer_stream(buffer);
  buffer_stream >> a >> operation >> b;
  action(operation, a, b);
  return 0;
}