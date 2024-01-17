#ifndef EMPLOYEE_HPP
#define EMployee_hpp
#include <iostream>

class employee{
private:
    std::string name;
    int         salary;
public:
    void    setEmployee(std::string employeeName, int employeeSalary)
    {
        name = employeeName;
        salary = employeeSalary;
    }
    std::string    getEmployeeName()
    {
        return (name);
    }
    int     getEmployeeSalary()
    {
        return (salary);
    } 
};

#endif