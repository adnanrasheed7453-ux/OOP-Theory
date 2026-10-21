#include<iostream>
using namespace std;
class student
{
	private:
	string name;   //data members 
	float cgpa;
	int age;
	
	public:
		student();     // Default Constructor Declaration
		student(string,float,int);  // Parameterized Constructor Declaration
		student(string); //PArameterized Constructor
		void input();
		void disp();			
};
student::student(string n,float c,int a)
{
	cout<<"PARATMETERIZED CONSTRUCTOR CALLED: "<<endl;
	name=n;
	cgpa=c;
	age=a;
	
}
student::student(string n)
{
	cout<<"PARATMETERIZED CONSTRUCTOR 2 CALLED: "<<endl;
	name=n;
	cgpa=3.4;
	age=55;
	
}


student::student()
{
	cout<<"Default Constructor Called: "<<endl;
	name="HASAN";
	cgpa=3.9;
	age=12;
}
void student::input()
	{
		cout<<"enter name of the student: "<<endl;
		cin>>name;
		cout<<"Enter CGPA:"<<endl;
		cin>>cgpa;
		cout<<"Enter Age: "<<endl;
		cin>>age;
	}
void student::disp()
	{
		cout<<"The name of the student is: "<<name<<endl;
		cout<<"The CGPA is: "<<cgpa<<endl;
		cout<<"The age is: "<<age<<endl;
	}
	
main()
{
	
	
	student s1("HASAN");
//	student s2;   // object declaration 
//	s1.disp();
//	cout<<endl;
	
//	s2.disp();
	//s1.input();
//	s1.disp();
	//cout<<s1.name<<endl;
	//cout<<s1.cgpa;
	
}
