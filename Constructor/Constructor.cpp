#include<iostream>
using namespace std;

class student
{
	string name;
	float cgpa;
	public:
	 student(); //Default Constructor Declaration
	 student(string, float);    // Parameterized Constructor Declaration
	 student(student &);    //Copy Constructor Declaration
	 void disp();
	 
	 
};
student::student(student &s)
{
	this->name=s.name;
	this->cgpa=s.cgpa;
	
	/*cout<<"Copy Constructor Called: "<<endl;
	name=s.name;
	cgpa=s.cgpa;
	*/
}
student::student()
{
	cout<<"Default Constructor Called: "<<endl;
	name="USAMA";
	cgpa=2.1;
}
student::student(string n, float c)
{
	cout<<"Parametrized Constructor Called: "<<endl;
	name=n;
	cgpa=c;
}
void student::disp()
{
	cout<<"The name is: "<<name<<endl;
	cout<<"The CGPA is: "<<cgpa<<endl;
}
main()
{
	student s1;
	student s2("Hafiz", 2.5);
	
	
    student s3=s2;   
    
   s3.disp();
    
}







/*
class student
{
	string name;
	int roll;
	float cgpa;
	public:
		student();
		student(string, int, float);
		student topper(student, student);
		void disp();
		
};
student::student()
{
	name="Ali";
	roll=32;
	cgpa=3.2;
}
student::student(string n, int r,float c)
{	name=n;
	roll=r;
	cgpa=c;	
}
student student::topper(student s1, student s2)
{
	if(s1.cgpa>s2.cgpa)
	return s1;
	else 
	return s2;
}
void student::disp()
{
	cout<<"The ame of topper is: "<<name<<endl;
	cout<<"The Roll of Topper is: "<<roll<<endl;
	cout<<"The CGPA is: "<<endl;
}
main()
{
	student s1("Hassan", 23,3.5);
	student s2("Ali", 32, 3.4);
	student s3;
	
	student s4 = s3.topper(s1,s2);
	
	
	s4.disp();


}




////////////////////////////////////////
class student
{
	string name;
	int roll;
	float cgpa;
	
	public:
		student(string, int, float);
		student(); 
		void disp(student []); 
};
student::student()
{
    string n;
	int r;
	float c;
	cout<<"Enter your name: "<<endl;
	cin>>n;
	cout<<"Enter your Roll: "<<endl;
	cin>>r;
	cout<<"Enter your CGPA: "<<endl;
	cin>>c;
	
	name=n;
	roll=r;
	cgpa=c;
}
student::student(string n, int r,float c)
{
	name=n;
	roll=r;
	cgpa=c;
	
	cout<<"The name is: "<<name<<endl;
	cout<<"The  roll is: "<<roll<<endl;
	cout<<"The CGPA is: "<<cgpa<<endl;
	
}
void student::disp(student s[])
{
	for(int i=0;i<5;i++)
   {
   	cout<<s[i].name<<endl;
   	cout<<s[i].roll<<endl;
   	cout<<s[i].cgpa<<endl;
}	
	
}

main()
{  student s1;
	student s[5];
	s1.disp(s);
	
	
	
}
*/
