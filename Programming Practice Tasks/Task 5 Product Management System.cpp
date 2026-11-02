#include<iostream>
using namespace std;

class product{
	
    public:
	float price;
	int quantity;
	    
		product(){
			
		price=0;
		quantity=0;	
		
		}	
	product(float p,int q){
		
	price=p;
	quantity=q;	
		
	}
	
	float calculateTotalCost(){
		
		return price * quantity;
		
	}
	
	void display(){
		
	cout<<"price:"<<price<<endl;
	cout<<"quantity:"<<quantity<<endl;
	cout<<"Totalcost:"<<calculateTotalCost()<<endl;	
		
		}
	};
int main (){
		
		product d1;
		product d2(1000.23,10);
		
		cout<<"Default Constructor:"<<endl;
		d1.display();
		cout<<"parameterize Constructor:"<<endl;
		d2.display();
		
		return 0;
				
	}
	
