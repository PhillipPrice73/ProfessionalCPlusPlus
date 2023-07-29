//
// Created by Nope on 7/29/23.
//

module employee;
import <iostream>;
import <format>;
using namespace std;

namespace Records {
    Employee::Employee(const std::string &firstName, const std::string &lastName)
    : m_firstName(firstName)
    , m_lastName(lastName) {}

    void Employee::promote(int raiseAmount) {
        setSalary(getSalary() + raiseAmount);
    }
    void Employee::demote(int demeritAmount) {
        setSalary(getSalary() - demeritAmount);
    }

    void Employee::hire() {
        m_hired = true;
    }
    void Employee::fire() {
        m_hired = false;
    }

    void Employee::display() const {
        cout << format("Employee: {}, {}", getLastName(), getFirstName()) << endl;
        cout << "-----------------------------------------" << endl;
        cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
        cout << format("Employee Number: {}", getEmployeeNumber()) << endl;
        cout << format("Salary: {}", getSalary()) << endl;
        cout << endl;
    }

    void Employee::setFirstName(const std::string &firstName) {
        m_firstName = firstName;
    }
    void Employee::setLastName(const std::string &lastName) {
        m_lastName = lastName;
    }
}