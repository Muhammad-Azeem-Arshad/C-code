#include <iostream>
using namespace std;

void swipValue(int &x, int &y){
    int z = x;
    x = y;
    y = z;
    
}


int main(){
    int firstNumber, secondNumber;
    cout<<"Enter first Value: ";
    cin>>firstNumber;
    cout<<"Enter second Value: ";
    cin>>secondNumber;
    cout<<"Before swip\n";
    cout<< firstNumber << secondNumber<< "\n";

    swipValue(firstNumber,secondNumber);
    cout<<"After swip\n";
    cout<< firstNumber << secondNumber<< "\n";
}