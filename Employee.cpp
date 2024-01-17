#include <iostream>
#include "Employee.hpp"

void    Employee::showInfo(){
    std::cout << "The name of the employee " << Employee::name;
    std::cout << " and his salary is " << Employee::salary << std::endl;
}

int main()
{
    Employee employee;

    employee.name = "Yasar";
    employee.salary = 10000;

    employee.showInfo();
}