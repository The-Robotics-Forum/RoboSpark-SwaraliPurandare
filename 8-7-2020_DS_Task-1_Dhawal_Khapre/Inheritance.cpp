#include<bits/stdc++.h>
using namespace std;

class Personal
{

protected:
    string first_name, last_name;
    string address;
    string mob;
    string dob;

public:
    //default constructor
    Personal()
    {
        first_name = '\0';
        last_name = '\0';
        address = '\0';
        dob = '\0';
        mob = '\0';
    }

    //parameterized constructor
    Personal ( string first_name, string last_name, string address, string dob, string mob)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->address = address;
        this->dob = dob;
        this->mob = mob;
    }

    void getPersonalData();
    void showPersonalData();

};

void Personal::getPersonalData()
{
    cout<<"\n\nEnter first name: ";
    cin>>first_name;

    cout<<"\nEnter last name: ";
    cin>>last_name;

    cout<<"\nEnter address: ";
    cin>>address;

    cout<<"\nEnter DOB: ";
    cin>>dob;

    cout<<"\nEnter Mobile no.: ";
    cin>>mob;
}

void Personal::showPersonalData()
{
    cout<<"\n\nPersonal Details : "<<endl;
    cout<<"First Name : "<<first_name<<" Last Name : "<<last_name<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"DOB : "<<dob<<endl;
    cout<<"Mobile Number : "<<mob<<endl;

}



class Professional
{
protected:
    string org;
    string job;
    string project;

public:
    //default constructor
    Professional()
    {
        org = '\0';
        job = '\0';
        project = '\0';
    }

    //parameterized constructor
    Professional(string org, string job, string project)
    {
        this->org = org;
        this->job = job;
        this->project = project;
    }

    void getProfessionalData();
    void showProfessionalData();
};


void Professional::getProfessionalData()
{
    cout<<"\n\nEnter Name of organization : ";
    cin>>org;

    cout<<"\nEnter Job Profile : ";
    cin>>job;

    cout<<"\nEnter Project Name : ";
    cin>>project;
}

void Professional::showProfessionalData()
{
    cout<<"\n\nProfessional Details : "<<endl;
    cout<<"Organization : "<<org<<endl;
    cout<<"Job Profile : "<<job<<endl;
    cout<<"Project : "<<project<<endl;
}



class Academic
{
protected :
    string college;
    int pass;
    float cgpa;
    string branch;

public:
    //default constructor
    Academic()
    {
        college = '\0';
        branch = '\0';
        pass = '\0';
        cgpa = '\0';
    }

    //parameterized constructor
    Academic(string college, string branch, int pass, float cgpa)
    {
        this->college = college;
        this->branch = branch;
        this->pass = pass;
        this->cgpa = cgpa;
    }


    void getAcademicData();
    void showAcademicData();
};


void Academic::getAcademicData()
{
    cout<<"\n\nEnter name of college : ";
    cin>>college;

    cout<<"\nEnter branch : ";
    cin>>branch;

    cout<<"Enter passing year : ";
    cin>>pass;

    cout<<"\nEnter CGPA : ";
    cin>>cgpa;
}

void Academic::showAcademicData()
{
    cout<<"\n\nAcademic Details : "<<endl;
    cout<<"College : "<<college<<endl;
    cout<<"Branch : "<<branch<<endl;
    cout<<"Passing Year : "<<pass<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
}


class Biodata : public Personal, public Professional, public Academic
{
public:
    Biodata()
    {
        cout<<"\n\nEnter Personal Data : ";
        getPersonalData();

        cout<<"\n\nEnter Professional Data : ";
        getProfessionalData();

        cout<<"\n\nEnter Academic Data : ";
        getAcademicData();

    }

    void showData();
};

void Biodata::showData()
{
    showPersonalData();
    showProfessionalData();
    showAcademicData();
}


int main()
{
    Biodata b;
    b.showData();
}