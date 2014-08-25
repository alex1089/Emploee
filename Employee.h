// Aleksey Leshchuk
// CISP400 online
// Assignment AD1 header

#include <string>
class Employee{
   public:
	Employee(std::string const& firstname, std::string const& lastname, int const& salary);
	void setFirstName(std::string const& firstname);
	void setLastName(std::string const& lastname);
	void setMonthlySalary(int const& salary);
	std::string getFirstName() const ;
	std::string getLastName() const ;
	int getMonthlySalary() const ;
	void increaseMonthlySalary(int const& increase);
    private:
	Employee();
	std::string fname;
	std::string lname;
	int sal;
};
