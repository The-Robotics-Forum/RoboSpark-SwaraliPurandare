#include<iostream>
using namespace std;
class student
{
	public :
	string name;
	int rollno;
	int cgpa;


	student(string a,int r,int c)
	{
		name=a;
		rollno=r;
		cgpa=c;
	}
	int calculate(int m[])
	{
		int j;
		for(j=0;j<5;j++)
		{
			cgpa+=m[j];
		}
		cgpa=cgpa*100;
		cgpa/=500;
		delete m;
	}
	void showDetails()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Roll no :"<<rollno<<endl;
		cout<<"Cgpa :"<<cgpa;
	}


};

int main()
{
	string name;
	int rollno;

	int *marks=new int [5];
	cout<<"Enter Details"<<endl;
	cout<<"Enter name:"<<endl;
	cin>>name;
	cout<<"Enter rollno:"<<endl;
	cin>>rollno;
	student s(name,rollno,0);
	int i;
		for(i=0;i<5;i++)
		{
			cout<<"Enter Subject Marks"<<endl;
			cout<<"Enter marks of"<<i+1<<"  subject"<<endl;
			cin>>marks[i];
		}

	s.calculate(marks);
	s.showDetails();

}
