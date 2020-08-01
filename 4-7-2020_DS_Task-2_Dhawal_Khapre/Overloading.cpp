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

    Student()
    {
        roll = 72;
        name = "Dhawal";
        year = 2;
        cgpa = 9.00;
    }

    void showData()
    {
        cout << "\nDetails are:\nRoll no :" << roll << "\nName :" << name << "\nYear :" << year << "\nCGPA :" << cgpa;
    }
 };

 void func (int rank) 
 {
     cout << "Rank is " << rank << endl;
 }

 void func (Student s)
 {
     s.showData();
     cout << "\nNo rank\n";
 }

 void func (Student s, int rank)
 {
     s.showData();
     cout << "\nRank is " << rank << endl;
 }

 int main(){
     Student s;
     func(1);
     func(s);
     func(s,1);
 } 