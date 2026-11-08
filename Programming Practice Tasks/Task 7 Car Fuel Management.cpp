#include<iostream>
using namespace std;

class car{
	
	private:
		float fuelLevel;
		float mileage;
		
		public:
			int registrationNumber;
			
			
			
			car(){
				
			fuelLevel=0;	
			mileage=0;
			registrationNumber=0;	
				
		}
			
			car(float f, float m, int r){
				
				
				
			fuelLevel=f;
			mileage=m;
			registrationNumber=r;		
				
			}
			
			
			void addfuel(float amount){
				
				
			fuelLevel=fuelLevel+amount;
				
	}
	
	void drive(float distance){
		
		
	float requiredfuel=distance/15;
	
	if(fuelLevel>=requiredfuel)	
	
	fuelLevel=fuelLevel-requiredfuel;
	
	else{
		
	cout<<"Insuficient:"<<endl;	
		
	}
}
	
   float getFuelLevel() {
   	
   	return fuelLevel;


   }
   
   void displaycar(){
   	
   	cout<<"fuel Level:"<<fuelLevel<<endl;
   	cout<<"mile age:"<<mileage<<endl;
   	cout<<"registration Number:"<<registrationNumber<<endl;
   	
   	
   	
   }
		
		
};

int main (){
	
	
	car c1;
	car c2(5.5,2.3,123);
	
	
	c1.addfuel(20);
	c1.drive(30);
	
	
	cout<<"Default Constructor:"<<endl;
	c1.displaycar();
	
	cout<<"Parameterize Constructor:"<<endl;
	c2.displaycar();	
	
	
	return 0;	
	
	
	
	
}
















