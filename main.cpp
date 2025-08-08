#include <iostream>
#include <string>

using namespace std;

int main() {
const int current_year = 2025;
string full_name;
int age;

cout << "Enter your full name: ";
getline(cin, full_name);

cout << "Enter your age: ";
cin >> age;

cout << "\nHello, " << full_name << "! You are " << age << " years old." << endl;

int years_until_60 = 21 - age;
int turn_60_year = current_year + years_until_60;
cout << "You will turn 21 years old in the year " << turn_60_year << "." << endl;

return 0;

}
