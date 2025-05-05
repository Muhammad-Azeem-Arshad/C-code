#include <iostream>
#include <string>
using namespace std;

int main(){
    string fist_name, lastName;
    cout << "Enter your first name: ";
    cin >> fist_name;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << fist_name + " " + lastName;
}