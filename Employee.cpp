// Aleksey Leshchuk
// CISP400 ONLINE
// Assignment AD1 cpp

#include <iostream>
#include <string>
#include "Employee.h"

Employee::Employee(std::string const& firstname, std::string const& lastname, int const& salary):
   fname(firstname),lname(lastname){
    setMonthlySalary(salary);
    }
    
void Employee::setFirstName(std::string const& firstname) {
    fname=firstname;
    }
void Employee::setLastName(std::string const& lastname){
    lname=lastname;
    }
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
int Employee::getMonthlySalary() const {
    return sal;
    }
void Employee::increaseMonthlySalary(int const& increase){
    std::cout<<"\n--- Employee: "<< fname<<" "<<lname<<" has a salary adjustment of "<< increase <<" %\n";
    std::cout<<" The new original salary is "<<sal<<".\n";
    sal+=sal*0.01*increase;
    std::cout<<" The new monthly salary is "<<sal<<".\n";
    }
