#include<iostream>
using namespace std;
class student
{
	int roll;
	float cgpa;
	int *semester;
	public:
		student();
		student(student &);
		void disp();
		~student();  // Destructor Declaration
		void input();
		void setRoll(int);
		void setCgpa(float);
		void setSemester(int &);
		int getRoll();
		float getCgpa();
		int getSemester();	
};
void student::setCgpa(float c)
{
	cgpa=c;
}
float student::getCgpa()
{
	return cgpa;
}
student::student()
{
	cout<<"Default Constuctor called:"<<endl;
	roll=20;
	cgpa=3.5;
	semester = new int;
	*semester=3;
}
student::student(student &s)
{
	cout<<"Parameterized Constuctor called:"<<endl;
	roll=s.roll+5;
	cgpa=s.cgpa+1.0;
	semester=new int;
	*semester=6;
}
void student::disp()
{
	cout<<"The roll is: "<<roll<<endl;
	cout<<"The CGPA is: "<<cgpa<<endl;
	cout<<"The Semester is: "<<*semester<<endl;
}
student::~student()
{
	cout<<"DE-Allocation Complete Successfully: "<<endl;
	delete semester;
}
void student::input()
{
	cout<<"Enter Roll No"<<endl;
	cin>>roll;
	cout<<"Enter CGPA: "<<endl;
	cin>>cgpa;
	semester=new int;
	cout<<"Enter Semester: "<<endl;
	cin>>*semester;
}
main()
{
	student s1;
	student s2(s1);
	s1.disp();
	cout<<endl;
	s2.disp();
	
	s2.input();
	cout<<endl;
	s2.disp();
	
	s2.setCgpa(3.2);
	cout<<"The CGPA UPDATED with: "<<s2.getCgpa()<<endl;
	
	
	

}
