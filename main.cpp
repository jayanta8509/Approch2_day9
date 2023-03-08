// Write a program to find Number of digits in an integer
#include <iostream>
#include <string>
using namespace std;
void howmany(int a) {
  string k = to_string(a);
  cout << k.length() << endl;
  // cout<<k.size()<<endl;
}

int main() {
  // std::cout << "Hello World!\n";
  int ok;
  cin >> ok;
  howmany(ok);
}