#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string contactNumber;

public:
    Person(string n, int a, string contact) : name(n), age(a), contactNumber(contact) {}
    void displayInfo() { cout << "Name: " << name << ", Age: " << age << ", Contact: " << contactNumber << endl; }
};

class Patient : public Person {
    int patientID;
    string medicalHistory;
    string doctorAssigned;
public:
    Patient(string n, int a, string contact, int id, string history, string doctor)
        : Person(n, a, contact), patientID(id), medicalHistory(history), doctorAssigned(doctor) {}
    void displayInfo() { cout << "Patient ID: " << patientID << ", Name: " << name << ", Medical History: " << medicalHistory << ", Assigned Doctor: " << doctorAssigned << endl; }
};

class Doctor : public Person {
    string specialization;
    double consultationFee;
public:
    Doctor(string n, int a, string contact, string spec, double fee)
        : Person(n, a, contact), specialization(spec), consultationFee(fee) {}
    void displayInfo() { cout << "Doctor: " << name << ", Specialization: " << specialization << ", Fee: " << consultationFee << endl; }
};

class Nurse : public Person {
    string assignedWard;
    string shiftTimings;
public:
    Nurse(string n, int a, string contact, string ward, string shift)
        : Person(n, a, contact), assignedWard(ward), shiftTimings(shift) {}
    void displayInfo() { cout << "Nurse: " << name << ", Assigned Ward: " << assignedWard << ", Shift: " << shiftTimings << endl; }
};

class Administrator : public Person {
    string department;
    double salary;
public:
    Administrator(string n, int a, string contact, string dept, double sal)
        : Person(n, a, contact), department(dept), salary(sal) {}
    void updateInfo() { cout << "Administrator: " << name << ", Department: " << department << ", Salary: " << salary << endl; }
};

int main() {
    Patient p1("danish", 30, "123-456", 101, "Diabetes", "Dr Smith");
    Doctor d1("hamza", 45, "987-654", "Cardiology", 200.0);
    Nurse n1("hunain", 28, "654-321", "icu", "Night");
    Administrator a1("sagar", 50, "321-987", "HR", 5000.0);
    
    p1.displayInfo();
    d1.displayInfo();
    n1.displayInfo();
    a1.updateInfo();
    
    return 0;
}