#include<iostream>
using namespace std;

class ElectricityBill{
	
	private:
		string customerName;
		float unitConsumed;
		float Bill;
		public:
			int meterNumber;
			
			
		ElectricityBill(){
				
		customerName = "Unknown";
		unitConsumed = 0;
		meterNumber = 0;
		Bill = 0;		
				}
			
		ElectricityBill(string n,float u, int m){
					
			customerName=n;
			unitConsumed=u;		
			meterNumber=m;	
			Bill = 0;	
				}
				
				void setunitConsumed(int u){
					
				unitConsumed = u;	
					
				}
		
       float getunitConsumed(){
       	
       	return unitConsumed;
       	
       	
	   }
	void calculateBill(){
		
		
		if (unitConsumed<=100){
		
		Bill = unitConsumed*20;
	}
	else if (unitConsumed<=200){
	
		Bill = unitConsumed*25;	
	}
		else {
		
		Bill = unitConsumed*30;
}

     cout<<"Total Bill:"<<Bill<<endl;
}
		
		void displayBill(){
			
			
		cout<<"customer Name:"<<customerName<<endl;
		cout<<"unit Consumer:"<<unitConsumed<<endl;
		cout<<"meter Number:"<<meterNumber<<endl;		
			
		}
		
	
};


int main ()
{
	
	ElectricityBill b1;
	ElectricityBill b2("Adnan", 113, 11032);
	
	
	b1.setunitConsumed(113);
	cout<<"consumed unit:"<<b1.getunitConsumed()<<endl;
	
	
	
	cout<<"Defaul Contructor:"<<endl;
	b1.displayBill();	
	b1.calculateBill();
	
	cout<<"parametirize Contructor:"<<endl;
	b2.displayBill();
	b2.calculateBill();
	
	return 0;

	
}
