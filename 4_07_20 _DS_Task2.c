#include<iostream>
using namespace std;
class student
{
	public :
		string name;
		int rollno;
	void input()
	{
		cout<<"Enter details"<<endl;
		cout<<"Enter Name & Rollno"<<endl;
		cin>> name;
		cin>>rollno;
	}
	void showRank(int i)
	{
		cout<<"Rank"<<endl<<endl;
	}
	void showRank(student s)
	{
		cout<<"Name :"<<s.name<<endl<<"Roll no :"<<s.rollno<<endl;
		cout<<"No rank"<<endl<<endl;
	}
	void showRank(student s,int i)
	{
		cout<<"Name :"<<s.name<<endl<<"Roll no :"<<s.rollno<<endl;
		cout<<"Rank"<<endl;

	}
};

int main()
{
	student s,s1;
	s.input();
	cout<<"Three Tyoes of function :"<<endl;
	cout<<"First with Int"<<endl;
	s1.showRank(5);
	cout<<"Second with student"<<endl;
	s1.showRank(s);
	cout<<"Third with Both Int and Student"<<endl;
	s1.showRank(s,5);
}
