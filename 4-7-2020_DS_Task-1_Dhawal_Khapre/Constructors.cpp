#include<iostream>
#include<string.h>

using namespace std;

 class Student
 {
     public:
     int roll;
     string name;
     float cgpa;
     int year;
     float *m = new float[5];
     int sum = 0;

    Student()
    {
        roll = 72;
        name = "Dhawal";
        year = 2;
    }

    void calcCGPA()
    {
        for (int i = 0; i < 5; i++)
            sum = sum + m[i];
        cgpa = (float(sum) / 500) * 10;
        delete[] m;
    }

    void getData()
    {
        cout << "Enter details of student\nEnter roll no ";
        cin >> roll;
        cout << "Enter name ";
        cin >> name;
        cout << "Enter year ";
        cin >> year;

        for (int i = 0; i < 5; i++){
            cout << "Enter marks of sub "<<i+1<<endl;
            cin >> m[i];
        }
    }

    void showData(){
        calcCGPA();
        cout << "\nDetails are:\nRoll no :" << roll << "\nName :" << name << "\nYear :" << year << "\nTotal Marks: " << sum << "\nCGPA :" << cgpa;
    }
 };

 int main()
 {
     Student s;
     s.getData();
     s.showData();
 } 