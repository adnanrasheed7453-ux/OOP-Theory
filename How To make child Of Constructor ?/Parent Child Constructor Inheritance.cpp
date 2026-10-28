#include<iostream>
using namespace std;
class person
{
	private: 
	   string name;
	protected:
		int age;
	public:
		string cnic;
	    //person();
	    void set_data();
	    void get_data();
	    
		};
	void person::set_data()
	{
		cout<<"Enter Name of the Player: "<<endl;
		cin>>name;
	}
	void person::get_data()
	{
		cout<<"The nam eof the Player is: "<<name<<endl;
	}
class student:public person
{
	private:
		int roll;
	protected:
		float cgpa;
	public:
		string degree;
	    //student();
	    void set_data();
	    void get_data();
};
void student::set_data()
{
	person::set_data();
	cout<<"Enter Roll No of the Player: "<<endl;
	cin>>roll;
}
void student::get_data()
{
	person::get_data();
	cout<<"The Roll No of the student is: "<<roll<<endl;
}
class sportsman:public student
{
   private:
        string game_name;
   protected:
        string role;
   public:
	     char status;
		 //sportsman();
		 void set_data();
		 void get_data();	
};
void sportsman::set_data()
{
	student::set_data();
	cout<<"Enter Age of the Player: "<<endl;
	cin>>age;
	cout<<"Enter CNIC of the Player: "<<endl;
	cin>>cnic;
	cout<<"Enter CGPA of the Player: "<<endl;
	cin>>cgpa;
	cout<<"Enter Degree Program of player: "<<endl;
	cin>>degree;
	cout<<"Enter Game Name which you want to play: "<<endl;
	cin>>game_name;
	cout<<"Enter Your Role in Team: "<<endl;
	cin>>role;
	cout<<"Enrollement Status ? "<<endl;
	cin>>status;
}
void sportsman::get_data()
{
	student::get_data();
	cout<<"The age of the player is: "<<age<<endl;
	cout<<"The CNIC of the player is: "<<cnic<<endl;
	cout<<"The CGPA of the player is: "<<cgpa<<endl;
	cout<<"The Degree Program of the player is: "<<degree<<endl;
	cout<<"The Game Name is: "<<game_name<<endl;
	cout<<"The Role of the player is: "<<role<<endl;
	cout<<"Enrolled ?"<<status<<endl;
}

main()
{
	sportsman s1;
	s1.set_data();
	cout<<endl;
	s1.get_data();
}


/*
class A
{
	int varA;
	float valA;
	public:
		A();
		A(int, float);
		A(A&);
};
A::A()
{
	cout<<"PARENT DEFAULT CONSTRUCTOR CALLED: "<<endl;
}
A::A(int i, float f)
{
	cout<<"PARENT PARAMETERIZED CONSTRUCTOR CALLED: "<<endl;
}
A::A(A&other)
{
	cout<<"PARENT COPY CONSTRUCTOR CALLED: "<<endl;
}
class B:public A
{
	int valB;
	public:
		B();
		B(int,int,float);
		B(B&);
};
B::B()
{
	cout<<"Child DEFAULT CONSTRUCTOR CALLED: "<<endl;
}
B::B(int i, int ia, float fa):A(ia,fa)
{
	cout<<"CHILD PARAMETERIZED CONSTRUCTOR CALLED: "<<endl;
}
B::B(B&other):A(other)
{
	cout<<"CHILD COPY CONSTRUCTOR CALLED: "<<endl;
}
main()
{
	B obj(5,4,3.2);
	B obj1=obj;
}
*/
