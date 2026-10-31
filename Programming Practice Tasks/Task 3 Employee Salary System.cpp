#include<iostream>
using namespace std;

class Employee{
	
	private:
		string name;
		float basicsalary;
	public:
		int employeeid;
		
		
		Employee()
		{
			
		name="unknown";
     	basicsalary=0;
    	employeeid=0;
			}
		Employee(string n,float b, int i ){
		
		
		name=n;
		basicsalary=b;
		employeeid=i;
	}
		
	void setbasicsalary(float b)
	{
		basicsalary =b;
		
	}

  float getbasicsalary()
	{
		return basicsalary;
		
	}
	
	float calculatebonus(){
		
		return basicsalary*0.10;
		
		
	}
	float calculateTotalsalary(){
		
		return basicsalary+calculatebonus();
}
    void display(){
    cout<<"Employee id:"<<employeeid<<endl;	
    cout<<"Bonus:"<<calculatebonus()<<endl;	
    cout<<"basic salary:"<<basicsalary<<endl;
    cout<<"Total salary:"<<calculateTotalsalary()<<endl;	
	}
	
};


int main(){
	
	Employee e1;
	Employee e2("Tahir", 80000,23459);
	
	cout<<"Default Constructor:"<<endl;
	e1.display();
	
	cout<<"parameterize Constructor:"<<endl;
	e2.display();
	
	return 0;
	
	
}
