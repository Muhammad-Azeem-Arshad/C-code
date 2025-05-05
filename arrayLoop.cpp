#include <iostream>
#include <string>
using namespace std;

int main(){
    string cars[6]= {"Toyota","Honda","Bugati","BMW","Farrari","Tesla"};
    for (int i = 0; i < 6; i++)
    {
        cout << cars[i]<< "\n";
    }
    for (string car : cars){
        cout<< car<< "\n";
    }
}