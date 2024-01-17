#include "Employee.hpp"

int main()
{
    employee employee1;
    employee employee2;
    int employeeID = -1;

    while (employeeID != 0)
    {
    std::cout << "Please enter the employee ID : ";
    std::cin >> employeeID;
    std::cout << std::endl;
        switch (employeeID)
        {
        case 1:
            employee1.setEmployee("yasar", 10000);
            std::cout << "Employee Name : " << employee1.getEmployeeName() << std::endl;
            std::cout << "Employee Salary : " << employee1.getEmployeeSalary() << std::endl;
            std::cout << "Click 0 to end the process" << std::endl;
            break;
        case 2:
            employee1.setEmployee("emine", 12000);
            std::cout << "Employee Name : " << employee1.getEmployeeName() << std::endl;
            std::cout << "Employee Salary : " << employee1.getEmployeeSalary() << std::endl;
            std::cout << "Click 0 to end the process" << std::endl;
            break;
        case 0:
            std::cout << "Program is ending..."<< std::endl;
            break;
        default:
            std::cout << "Wrong ID" << std::endl;
            break;
        }
    }
}