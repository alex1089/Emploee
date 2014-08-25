// Aleksey Leshchuk
// CISP400 ONLINE
// Assignment AD1 cpp

#include <iostream>
#include <string>
#include "Employee.h"

// object constructor. initializes all data members. Take first and last name and salary of employee
Employee::Employee(std::string const& firstname, std::string const& lastname, int const& salary):
   fname(firstname),lname(lastname){
    setMonthlySalary(salary);
    }
// setter member function to change first name of Employee  
void Employee::setFirstName(std::string const& firstname) {
    fname=firstname;
    }

// setter member function to change last name of Employee
void Employee::setLastName(std::string const& lastname){
    lname=lastname;
    }

// set monthly salary of Employee, if value is 0 or less, sets salary at 1000
void Employee::setMonthlySalary(int const& salary){
    if (salary<=0){
	std::cout<<"XX Employee: "<<fname<<" "<<lname<<" inputted salary monthly salary is: "<<salary<<std::endl;
	sal=1000;
	std::cout<<"**  The salary is set to $1000 **\n";
    }else 
	sal=salary;
}
std::string Employee::getFirstName() const {
    return fname;
    }
std::string Employee::getLastName() const {
    return lname;
    }

// returns Employee's monthly salary
int Employee::getMonthlySalary() const {
    return sal;
    }

// method to alter employee's salary by a certain %
void Employee::increaseMonthlySalary(int const& increase){
    std::cout<<"\n--- Employee: "<< fname<<" "<<lname<<" has a salary adjustment of "<< increase <<" %\n";
    std::cout<<" The new original salary is "<<sal<<".\n";
    sal+=sal*0.01*increase;
    std::cout<<" The new monthly salary is "<<sal<<".\n";
    }
