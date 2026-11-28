#include<iostream>
using namespace std;

class CartItem{
	
	private:
		string itemName;
		float unitPrice;
		int quantity;
		
		public:
			int itemCode;
			
			
	CartItem(){
		
		itemName = "Unknown";
		unitPrice = 0;
		quantity = 0;
		itemCode = 0;
		
	}	
	
	CartItem(string i , float p , int q , int c){
	
	
	itemName = i;
		unitPrice = p;
		quantity = q;
		itemCode = c;
	
	
	
	 }
	 
	void  increaseQuantity(){
		
	quantity++;
		
	}
	
    void  DecreaseQuantity(){
		
	quantity--;
		
	}
	
	int calculateSubtotal(){
		
	return (unitPrice * quantity);
		
	}
	
   void	applyDiscount(){
   	
   	int Subtotal = calculateSubtotal();
   	
   	if (Subtotal > 10000){
   		
   	Subtotal = Subtotal - (Subtotal*0.10);	
   		
	   }
	   
	   
	   cout<<"Final Price:"<<Subtotal<<endl;
	   
   }
   
   
   void displayItem(){
   	
   	cout<<"Item Name:"<<itemName<<endl;
   	cout<<"Unit Price:"<<unitPrice<<endl;
   	cout<<"Quantity:"<<quantity<<endl;
   	
   }

};
   int main ()
   {
   	
   	CartItem c1;
   	CartItem c2("charger" , 1500 , 5 , 12011021);
   	
   	
   	cout<<"Default Constructor:"<<endl;
   	c1.displayItem();
   	
   	
   	cout<<"parametirize Constructor:"<<endl;
   	c2.displayItem();
   	
   	cout << "Discount Calculation:" << endl;
    c2.applyDiscount();
   	
   	
   	return 0;
 	
   	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

