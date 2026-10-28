#include<iostream>
using namespace std;
class person
{
   private:
     string name;
	 int age;
   protected:
     double cnic;
	 char gender;
	public:
	  float height;
	  person();	
	  ~person(); 
	  void get_accessP(); 	
};
person::person()
{
	cout<<"PARENT CONSTRUCTOR CALLED: "<<endl;
	name="Ali";
	age=21;
	cnic=123;
	gender='M';
	height=5.6;
}
person::~person()
{
	cout<<"PARENT DESTRUCTOR CALLED: "<<endl;
}
void person::get_accessP()
{
	cout<<"The Name of the student is: "<<name<<endl;
	cout<<"The age of the student is: "<<age<<endl;
}
class student:public person
{
	int roll;
	float cgpa;
	int sem;
	
	public:
		student();
		~student();
		void get_access();
};
student::student()
{
	cout<<"CHILD CONSTRUCTOR CALLED: "<<endl;
	roll=12;
	cgpa=3.5;
	sem=3;
}
student::~student()
{
	cout<<"CHILD Destructor Called: "<<endl;
}
void student::get_access()
{
	person::get_accessP();
	cout<<"The CNIC of the student is: "<<cnic<<endl;
	cout<<"The GENDER of the student is: "<<gender<<endl;
	cout<<"The HEIGHT of the student is: "<<height<<endl;
	cout<<"The ROLL No of the student is: "<<roll<<endl;
	cout<<"The CGPA of the student is: "<<cgpa<<endl;
	cout<<"The Semester of the student is: "<<sem<<endl;
	
}
main()
{
	student s1;
	cout<<endl;
	
	s1.get_access();
	cout<<endl;
	
	
	
}
