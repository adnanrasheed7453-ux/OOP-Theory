#include <iostream>
using namespace std;

class Rectangular{
	
	
	private:
		float length;
		float width;
		
		public:
	    
	     string	color;
	     
	     Rectangular(){
	     	
	     	length=1;
	     	width=1;
	     	color="unknown";
	     	   	
		 }
		 
		 Rectangular(float l,float w,string c)
		 {
		 	
		 	length=l;
		 	width=w;
		 	color=c;
		 	
		 	 }
		 
          	void setlength	(float l){
		
	length=l;
			 } 	
			 void setwidth	(float w)
	
	{
		
	width=w;
		
			 } 		
			 
			 float getlength(){
			 	
			 	
			 	return length;
			 	
			 }
			 float getwidth(){
			 	
			 	
			 	return width;
			 	
			 }	
			 
			 float calculateArea(){
			 	
			 return length*width;	
			 	
			 }
			 float  calculateParimeter(){
			 	
			 	return 2*(length+width);
 	
			 }
			 		void display (){
				
				
			cout<<"Length:"<<length<<endl;
			cout<<"width:"<<width<<endl;
			cout<<"color:"<<color<<endl;
			cout<<"Area:"<<calculateArea()<<endl;
			cout<<"parimeter:"<<calculateParimeter()<<endl;		
			}	
};

int main (){
	
	Rectangular r1;
	Rectangular r2(4.3,5.7,"Black");
	
	
	cout<<"Default Constructor:"<<endl;
	r1.display();
	
    cout<<"parameterize Constructor:"<<endl;
	r2.display();
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
