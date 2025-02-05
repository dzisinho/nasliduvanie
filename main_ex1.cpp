#include <iostream>

using namespace std;

class Student {
public:
    Student(const char* studentName, const char* studentSurname, int studentAge) {
        name = studentName;
        surname = studentSurname;
        age = studentAge;
    }

    void displayStudentInfo() const {
        cout << "Student Name: " << name << " " << surname << endl;
        cout << "Age: " << age << endl;
    }

protected:
    const char* name;      
    const char* surname;  
    int age;               
};

class Aspirant : public Student {
public:
    Aspirant(const char* studentName, const char* studentSurname, int studentAge, const char* thesisTitle)
        : Student(studentName, studentSurname, studentAge) {
        thesis = thesisTitle;
    }

    void displayAspirantInfo() const {
        displayStudentInfo(); 
        cout << "Thesis Title: " << thesis << endl;
    }

private:
    const char* thesis; 
};

int main() {
    Aspirant aspirant("John", "Doe", 25, "Quantum Computing Research");

    aspirant.displayAspirantInfo();

    return 0;
}
