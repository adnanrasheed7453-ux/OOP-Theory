#include<iostream>
using namespace std;

class student{
	
	private:
		string name;
		float marks;
    public:
	int rollnumber;
	
	student()
	{
	name="unknown";
	marks=0;
	rollnumber=0;	
	}
	
	student(string n, float m, int r)
	{
	name=n;
	marks=m;
	rollnumber=r;	
}
	void setname(string n)	
	{
	
	name = n;
	}
	
		void setmarks(float m)	
	{
	
	marks = m;
	}
	
	string getname()
	
	{
		
		return name;
		
	}
	float getmarks()
	
	{
		
		return marks;
		
	}
	
	char getgrade()
	
	{
		
	if (marks>= 80)	
	return 'A';
    else if (marks>= 70)	
	return 'B';
	else if (marks>= 60)	
	return 'C';
	else if (marks>= 50)	
	return 'D';
	else 
	return 'F';
}
	
	void display(){
		
		
	cout<<"student name: "<<getname()<<endl;	
	cout<<"student marks: "<<getmarks()<<endl;
	cout<<"Roll Number: "<<rollnumber<<endl;
	cout<<"student grade: "<<getgrade()<<endl;
			
	}
};
	int main(){
		
		student s1;
		
		
		student s2("Adnan",90,324);
		
		cout<<"Default constructor:"<<endl;
		s1.display();

		
		cout<<"parameterize constructor:"<<endl;
		s2.display();
		
		
		return 0;
		
	}
		
		
		
		
		
		
		
		
		

