#include <iostream>
using namespace std;

float ToCelcius(float Fohrenheit){
    return (5.0/9.0) * (Fohrenheit - 32.0);
}

int main(){

    float FohrenheitValue;
    cout<<"Enter Fohrenheit Value: ";
    cin>> FohrenheitValue;

    float result = ToCelcius(FohrenheitValue);

    cout<<"Fohrenheit Value in Celcius = "<< result;

}