//
// Created by Nope on 7/23/23.
//

export module employee;
import <string>;

namespace Records {

    const int kDefaultStartingSalary{30'000};
    export const int kDefaultRaiseAndDemeritAmount {1'000};

    export class Employee {
    public:
        Employee(const std::string& firstName, const std::string& lastName);

        void promote(int raiseAmount = kDefaultRaiseAndDemeritAmount);
        void demote(int demeritAmount = kDefaultRaiseAndDemeritAmount);
        void hire();
        void fire();
        void display() const;

        void setFirstName(const std::string& firstName);
        const std::string& getFirstName() const;

        void setLastName(const std::string& lastName);
        const std::string& getLastName() const;

        void setEmployeeNumber(int employeeNumber);
        int getEmployeeNumber() const;

        void setSalary(int salary);
        int getSalary() const;

        bool isHired() const;

    private:
        std::string m_firstName;
        std::string m_lastName;
        int m_employeeNumber{-1};
        int m_salary{kDefaultStartingSalary};
        bool m_hired{false};
    };
} // namespace Records
