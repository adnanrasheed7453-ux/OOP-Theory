#include<iostream>
using namespace std;
class car
{
    string company;
	string model;
	int power;
	int no_of_seats;
	string *color;
	static int count;
	public:
		car();
		car(string,string, int, int);
		car(car&);
		~car();
		void setCompany(string);
		void setModel(string);
		void setPower(int);
		void setNoOfSeats(int);
		string getCompany();
		string getModel();
		int getPower();
		int getNoOfSeats();
		void setData();
		void getData();
		
		
};
int car::count=0;
car::car()
{
	company="Honda";
	model="CIVIC";
	power=1800;
	no_of_seats=5;
	color=new string;
	*color="Black";
	count=count+1;
	
	
}
car::car(string c,string m, int p, int s)
{
	
}
car::car(car &c)
{
	company=c.company;
	model=c.model;
	power=c.power;
	no_of_seats=c.no_of_seats;
//	color=c.color;
     color=new string;
     *color="WHITE";
     count=count+1;
	
}
car::~car()
{
	
}
void car::setData()
{
	
}
void car::getData()
{
	
}
main()
{
	car c1;
	car c2(c1);
}
