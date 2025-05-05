#include <iostream>
#include <string>
using namespace std;

int main(){
    string fullName;
    cout << "Enter your first name: ";
    getline(cin, fullName);
    cout << "your name is: " << fullName;
}