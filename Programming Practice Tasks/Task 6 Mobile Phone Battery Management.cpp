#include<iostream>
using namespace std;

class Mobilephone{
	
	private:
		 string brand;
		 float price;
		 int batteryPercentage;
		 
		 public:
		 	string model;
		 	
		 	
		Mobilephone(){
			
			brand="unspecified";
			price=0;
		    batteryPercentage=100;	
		} 
		
		Mobilephone(string b, float p, int bat , string m) 
		{
		brand=b;
		price=p;
		batteryPercentage= bat;
		model=m;
		
		}	
		
		void setprice(float p){
			
		price=p;
			
				}
		
		float getprice(){
			
		return price;	
			
	}
	
	
	
	void chargebattery(int percentage){
		
		
		batteryPercentage+=percentage;
	
	if (batteryPercentage > 100){
		
		batteryPercentage=100;
	}
}
		 	
     void usebattery(int percentage){
     	batteryPercentage-=percentage;
	 
     if (batteryPercentage < 0){
     	
     batteryPercentage=0;	

	 }
}
	 
	 void displayphone(){
	 	
	 	cout<<"Brand:"<<brand<<endl;
	 	cout<<"price:"<<price<<endl;
	 	cout<<"Model:"<<model<<endl;
	 	cout<<"Battreypercentage:"<<batteryPercentage<<"%"<<endl;
	 
	 		
	 }
	
	
};


int main (){
	
	    Mobilephone m1;
	    
	    cout<<"Default Constructor:"<<endl;
	    m1.displayphone();	
	
	Mobilephone m2("infinix",51000,100,"Note 25");
	cout<<"parameterize Constructor:"<<endl;
	m2.displayphone();	
	
	m2.chargebattery(20);
	
	m2.usebattery(30);
	
	return 0;
	
	
	
	
}
