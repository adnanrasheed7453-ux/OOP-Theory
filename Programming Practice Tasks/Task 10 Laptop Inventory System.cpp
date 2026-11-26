#include<iostream>
using namespace std;

class laptop {
	
	private:
	
	int RAM;
	float price;
	
	public:
		
		int serialNumber;
		
		
	laptop(){
		
		
	RAM = 0;
	price = 0;
	serialNumber = 0;	
		
	}	
	
	laptop(int  r , float p , int n){
		
		
	RAM = r;
	price = p;
	serialNumber = n;	
		
	}
	
	void setprice(int p){
		
		price = p;
		
		
	}
	
	float getprice(){
		
	return price;	
		
		
	}
	
	
	upgradeRAM(int amount){
		
	RAM = RAM+amount;	
		
	cout<<"Update RAM:"<<RAM<<"GB"<<endl;
	 	
	}
	
   void displaySpecifications() {
		
		
		cout<<"RAM:"<<RAM<<endl;
		cout<<"price:"<<price<<endl;
		cout<<"serialNumber:"<<serialNumber<<endl;
		
			}

	
};


int main (){
	
	
	laptop l1;
	laptop l2(32 , 12000 , 23456543 );
	
	
	
	l1.setprice(13000);
	cout<<l1.getprice()<<endl;
	
	
	cout<<"Default Constructor:"<<endl;
	l1.displaySpecifications();
	l1.upgradeRAM(8);
	
	
		
	cout<<"parametirize Constructor:"<<endl;
	l2.displaySpecifications();
	l2.upgradeRAM(8);
	
	
	return 0;	
	
	
	
}
