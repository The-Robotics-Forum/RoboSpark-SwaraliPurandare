#include<bits/stdc++.h>
using namespace std;

//global variables
int sum_grade = 0;
int sum_credit = 0;
int grade_total;

//class defining
class Student
{
    public:
    int* grades;
    int* credits;
    string name;
    int id;
    float cgpa;

    //constructer student
    Student()
    {   //declaring all the values to default
        grades = 0;
        credits = 0;
        cgpa=0; //initially cgpa is eqal to zero
        name = "Default_name";
        id = 0;
    }
//student details
void getInput()
{
    cout << "\nEnter student details --- \n";
    cout << "Name: ";
    cin >> name;
    cout << "Id : ";
    cin >> id;
    cout << "\n";
    grades = new int[5];//dynamic memory allocation
    credits = new int[5];//dynamic memory allocation
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i+1 << " grade obtained : ";
        cin >> grades[i];
        cout << "Subject" << i+1 << " credits obtained : ";
        cin >> credits[i];
    }
}
//cgpa details
void showDetails()
{
    cout << "\nStudent : " << name << " - Id no. : " << id <<" secured " << setprecision(3) << cal_cgpa() <<" CGPA." << endl;   
}
//grades total calculating function
int total()
{
    for (int i = 0; i < 5; i++)
    {
        sum_grade = sum_grade + grades[i];
        sum_credit = sum_credit + credits[i];
    }
    
    return sum_grade;
}
//cgpa calculating function
float cal_cgpa()
{
    for (int i = 0; i < 5; i++)
    {
       grade_total = grade_total + grades[i] * credits[i];
    }
    cgpa = float(grade_total)/float(sum_credit);

    return cgpa;
}

};


int main()
{
    Student *s = new Student;
    s->getInput();// inputting data
    cout << "\nTotal grades obtained : ";
    cout << s->total() << endl;// total grades obtained    
    s->showDetails();//cgpa details
     delete s;
    

return 0;    
}
