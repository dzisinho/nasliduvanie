#include <iostream>

using namespace std;

class Passport {
public:
    Passport(const char* citizenName, const char* citizenSurname, const char* citizenDOB, const char* passportSeries, const char* passportNumber) {
        name = citizenName;
        surname = citizenSurname;
        dateOfBirth = citizenDOB;
        series = passportSeries;
        number = passportNumber;
    }

    void displayPassportInfo() const {
        cout << "Name: " << name << " " << surname << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
        cout << "Passport Series: " << series << endl;
        cout << "Passport Number: " << number << endl;
    }

protected:
    const char* name;       
    const char* surname;    
    const char* dateOfBirth; 
    const char* series;      
    const char* number;      
};
class ForeignPassport : public Passport {
public:
    ForeignPassport(const char* citizenName, const char* citizenSurname, const char* citizenDOB, const char* passportSeries, const char* passportNumber, const char* foreignPassportNumber, const char* visaInfo)
        : Passport(citizenName, citizenSurname, citizenDOB, passportSeries, passportNumber) {
        foreignNumber = foreignPassportNumber;
        visaDetails = visaInfo;
    }

    void displayForeignPassportInfo() const {
        displayPassportInfo();
        cout << "Foreign Passport Number: " << foreignNumber << endl;
        cout << "Visa Information: " << visaDetails << endl;
    }

private:
    const char* foreignNumber; 
    const char* visaDetails;  
};

int main() {
    ForeignPassport foreignPassport("Ivan", "Petrov", "01.01.1990", "AA", "123456", "987654321", "Shengen Visa, USA Visa");

    foreignPassport.displayForeignPassportInfo();

    return 0;
}
