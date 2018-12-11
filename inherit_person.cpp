#include <iostream>
#include <string>
 
class Person
{
private:
    std::string m_name;
    int m_age;
 
public:
    Person(std::string name, int age)
        : m_name(name), m_age(age)
    {
    }
 
    std::string getName() { return m_name; }
    int getAge() { return m_age; }
};
 
class Employee
{
private:
    std::string m_employer;
    double m_wage;
 
public:
    Employee(std::string employer, double wage)
        : m_employer(employer), m_wage(wage)
    {
    }
 
    std::string getEmployer() { return m_employer; }
    double getWage() { return m_wage; }
};
 
// Teacher publicly inherits Person and Employee
class Teacher: public Person, public Employee
{
private:
     int m_teachesGrade;
 
public:
    Teacher(std::string name, int age, double wage, int teachesGrade)
        : Person(name, age), Employee(name, wage), m_teachesGrade(teachesGrade)
    {
    }
    
};

int main()
{
	Person P1("lahari" , 19);
	Employee E1("lasya" , 2000);
	Teacher T1 ("Sridevi",40,1000,5);
	std::cout << "Person is : " << P1.getName() << "," << P1.getAge() << std::endl;
	std::cout << "Employee is : " << E1.getEmployer() << "," << E1.getWage()<<std::endl;
	std::cout << "Teacher is : " <<T1.getName()<<std::endl;
	return 0;
}
