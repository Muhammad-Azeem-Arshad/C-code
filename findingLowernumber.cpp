#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers = {20,65,6,3,89,57,3,2,100,65};

    int LowestNumber = numbers[0];

    for (int number: numbers)
    {
        if(LowestNumber > number)
        {
            LowestNumber = number;
        }
    }
    
    cout << "Lowest number in array: " << LowestNumber << "\n";

}