#include <iostream>
#include <string>

class Company {
public:
    std::string companyName;
    int yearFounded;
    bool russianCompany;
    int profit;

    Company() : companyName("Default Company"), yearFounded(1), russianCompany(true), profit(0) {}
    Company(std::string name, int year, bool russian, int rub) : companyName(name), yearFounded(year), russianCompany(russian), profit(rub) {}

    void displayInfo() {
        std::cout << "Company: " << companyName << ", Year Founded: " << yearFounded << ", Russian company: " << (russianCompany ? "Yes" : "No") << ", Profit RUB: " << profit << std::endl;
    }
};

class Employee {
public:
    std::string name;
    int age;
    bool higherEducation;
    int numberOfProjects;

    Employee() : name("Default Employee"), age(23), higherEducation(true), numberOfProjects(0) {}
    Employee(std::string name, int age, bool education, int projects) : name(name), age(age), higherEducation(education), numberOfProjects(projects) {}

    void displayInfo() {
        std::cout << "Employee: " << name << ", Age: " << age << ", Higher education: " << (higherEducation ? "Yes" : "No") << ", Projects: " << numberOfProjects << std::endl;
    }
};

class Vehicle {
public:
    std::string type;
    int year;
    bool insurance;

    Vehicle() : type("Default Vehicle"), year(0), insurance(true) {}
    Vehicle(std::string type, int year, bool insurance) : type(type), year(year), insurance(insurance) {}

    void displayInfo() {
        std::cout << "Vehicle Type: " << type << ", Year: " << year << ", Have insurance: " << (insurance ? "yes" : "no") << std::endl;
    }
};

class Truck : public Vehicle {
public:
    float engineCapacity;
    std::string bodyType;

    Truck() : engineCapacity(0.0), bodyType("Flatbed") {}
    Truck(std::string type, int year, bool insurance, float engine, std::string body) : Vehicle(type, year, insurance), engineCapacity(engine), bodyType(body) {}

    void displayInfo() {
        std::cout << "Engine capacity: " << engineCapacity << "L." << ", Body type: " << bodyType << std::endl;
        Vehicle::displayInfo();
    }
};

class Car : public Vehicle {
public:
    int mileage;
    bool isElectric;

    Car() : mileage(0), isElectric(true) {}
    Car(std::string type, int year, bool insurance, int mileage, bool electric) : Vehicle(type, year, insurance), mileage(mileage), isElectric(electric) {}

    void displayInfo() {
        std::cout << "Mileage: " << mileage << ", Electric: " << (isElectric ? "Yes" : "No") << std::endl;
        Vehicle::displayInfo();
    }

};

int main() {
    Company company1("Skazka", 2004, true, 400000);
    Employee employee1("Marat", 14, true, 45);

    Truck truck1("Tayota", 2015, true, 8, "Flatbed");
    Car car1("BMW", 2022, true, 9800, true);

    company1.displayInfo();
    employee1.displayInfo();
    truck1.displayInfo();
    car1.displayInfo();

    return 0;
}
