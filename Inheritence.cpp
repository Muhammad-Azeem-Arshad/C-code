#include <iostream>
using namespace std;

class inheritence
{
    protected:
    int salary;
};

class salaryEmployee: public inheritence{
    public:
    int bonus;
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary + bonus;
    }
};

int main(){
    salaryEmployee obj1;
    obj1.bonus= 5000;
    obj1.setSalary(35000);
    int totalSalary = obj1.getSalary();
    cout<<"total salary: "<<totalSalary;
}
