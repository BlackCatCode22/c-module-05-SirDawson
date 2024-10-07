#include <iostream>
#include <vector>

using std::string, std::cout, std::vector;

class Employee
{
    public:
    string name;
    string company;
    int age;

    // Constructor with default arguments for flexibility
    Employee(string eName = "Unknown", string eCompany = "Unknown", int eAge = 0)
    {
        name = eName;
        company = eCompany;
        age = eAge;
        cout << "An employee was created!\n";
    }

    // Method to introduce the employee
    void introduceYourself()
    {
        cout << "Name - " << name << '\n'
             << "Company - " << company << '\n'
             << "Age - " << age << "\n\n";
    }
};

int main()
{
    // Create a vector of employees
    vector<Employee> employees;

    // Add different employees using the flexible constructor
    employees.push_back(Employee("Sir-Aaramis", "Fresno City College", 22));
    employees.push_back(Employee("John", "Amazon", 25));
    employees.push_back(Employee("Jane", "Google", 30));
    employees.push_back(Employee("Alice", "Microsoft", 28));
    employees.push_back(Employee("Bob", "Meta", 35));
    employees.push_back(Employee("Charlie", "Apple", 26));
    employees.push_back(Employee());  // Default constructor

    // Add more employees with various constructors
    for (int i = 1; i <= 50; i++) {
        employees.push_back(Employee("Employee" + std::to_string(i), "Company" + std::to_string(i), 20 + i));
    }

    // Iterate through the vector and introduce each employee
    for (Employee& emp : employees)
    {
        emp.introduceYourself();
    }

    return 0;
}

/*
-- Rules of constructors --
A constructor must have the same as the class it belongs to.
Constructors cannot have a return type.
Constructors must be public.
*/