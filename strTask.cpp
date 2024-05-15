#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString;
  cin >> myString;
  string cons = ".";
  string res;
  for (int i = 0; i < myString.length(); i++) {
    if (tolower(myString[i]) == 'a' || myString[i] == 'A' ||
        tolower(myString[i]) == 'u' || myString[i] == 'U' ||
        tolower(myString[i]) == 'o' || myString[i] == 'O' ||
        tolower(myString[i]) == 'y' || myString[i] == 'Y' ||
        tolower(myString[i]) == 'e' || myString[i] == 'E' ||
        tolower(myString[i]) == 'i' || myString[i] == 'I') {
      res += "";
    } else {
      char s = tolower(myString[i]);
      res += cons + s;
    }
  }

  cout << res;
  return 0;
}
