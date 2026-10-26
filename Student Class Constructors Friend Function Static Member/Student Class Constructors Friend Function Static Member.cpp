#include<iostream>
using namespace std;
class student
{
	int roll;
	string name;
	float cgpa;
	int *sem;
	string degree;
		static int r;
	public:
		
		friend void access_data(student &);
		static int access_r();
		student();
		student(string, float, string);
		student(student&);
		void set_roll(int);
		void set_name(string);
		void set_cgpa(float);
		void set_degree(string);
		int get_roll();
		string get_name();
		float get_cgpa();
		string get_degree();
		void set_data();
		void get_data();
		~student();	
};
int student::r=0;   
int student::access_r()
{
	return r;
}
student::student()
{
	r=r+1;
	roll=r;
	name="USMAN";
	cgpa=1.1;
	degree="BSCS";
	sem=new int;
	*sem=3;
}
student::student(string n, float c, string d)
{
	r=r+1;
	roll=r;
	name=n;
	cgpa=c;
	degree=d;
	sem=new int;
	*sem=3;
}
student::student(student &s)
{
	r=r+1;
	roll=r;
	name=s.name;
	cgpa=s.cgpa;
	degree=s.degree;
	sem=new int;
	*sem=3;
}
void student::get_data()
{
	cout<<"The roll no of student is: "<<roll<<endl;
	cout<<"The NAme of the student is: "<<name<<endl;
	cout<<"The CGPA is: "<<cgpa<<endl;
	cout<<"The Degree is: "<<degree<<endl;
	cout<<"The semester is: "<<*sem<<endl;
	
	cout<<"The Sem Pointer Pointing to memory address: "<<sem<<endl;
}

student::~student()
{
	delete sem;
}

void access_data(student &s)
{
//	cout<<"The roll of the student: "<<s.roll<<endl;
	cout<<"The CGPA is: "<<s.cgpa<<endl;
	cout<<"The name is: "<<s.name<<endl;
	
}

main()
{
	student s1;
	s1.get_data();
	cout<<endl;
	//cout<<s1.access_r()<<endl;
	student s2("Zain", 3.5, "BSCS");
	s2.get_data();
	cout<<endl;
	student s3(s2);
	s3.get_data();
	
    cout<<endl;
    //cout<<student::access_r()<<endl;
    //cout<<s1.access_r()<<endl;	
    
    access_data(s2);
}
