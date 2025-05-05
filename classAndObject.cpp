#include <iostream>
#include <string>
using namespace std;

class car
{
public:
    string model;
    string color;
    int model_number;
};

int main(){
    car obj1;
    cout<<"Enter your car model: ";
    cin>>obj1.model;
    cout<<"Enter you car color: ";
    cin>>obj1.color;
    cout<<"Enter your model number: ";
    cin>>obj1.model_number;

    cout<<"Here is your specification: "<<obj1.model<<" "<<obj1.color<<" "<<obj1.model_number;
}


