#include<iostream>
using namespace std;

class Hospital_Database
{   
protected:
    string PatientName;
    string DateOfAdmission;
    string Disease;
    string DateOfDischarge;

public:
    void GetData()
    {
        cout << "Enter Patient Name: ";
        cin >> PatientName;
        cout << "Enter Date of Admission: ";
        cin >> DateOfAdmission;
        cout << "Enter the disease: ";
        cin >> Disease;
        cout << "Enter Date of Discharge: ";
        cin >> DateOfDischarge;
    }

    void display()
    {
        cout << "Patient Name: " << PatientName << endl;
        cout << "Date of Admission: " << DateOfAdmission << endl;
        cout << "Disease: " << Disease << endl;
        cout << "Date of Discharge: " << DateOfDischarge << endl;
    }
};

class GetAge : public Hospital_Database
{
private:
    int age;

public:
    void Get_Age()
    {
        cout << "Enter Age of Patient: ";
        cin >> age;
    }

    void displayAge()
    {
        cout << "Patient Age: " << age << endl;
    }
};

int main()
{
    GetAge patient;
    patient.GetData();
    patient.Get_Age();
    patient.display();
    patient.displayAge();

    return 0;
}
