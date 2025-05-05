#include <iostream>
using namespace std;

class EmployeeData
{
    private:
        int salary;
    public:
        void setSalary(int x){
            salary = x;
        }
        int getSalary(){
            return salary;
        }
};
int main(){
    EmployeeData obj1;
    obj1.setSalary(50000);
    
    cout<<"Salary: "<<obj1.getSalary();
}
