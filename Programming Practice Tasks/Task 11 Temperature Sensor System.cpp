#include<iostream>
using namespace std;

class TemperatureSensor{
	
	private:
		
		int temperature;
		string location;
				
	public:
		
		int sensorID;
		
	TemperatureSensor(){
		
	temperature = 0;
	location = "Unknown";
	sensorID = 0;
		
	}
	
		TemperatureSensor(int t , string l , int i){
	
       	temperature = t;
       	location = l;
	    sensorID = i;
}

   void settemperature(int t){
   	
   	temperature = t;
   	
   	
   }
   
   int gettemperature(){
   	
   	return temperature;
   	
   	
   }
   
   int convertToFahrenheit() {
   	
   	
   	return(temperature * 9 / 5 )+ 32;
   	
   	
   	
   }
   
  void checkStatus(){
  	
  	if (temperature <15){
  		
  	cout<<"Cold:"<<endl;
	  	
	  }
	  
	  else if(temperature>=15 && temperature<=30){
	  	
	  	
	  	cout<<"Normal:"<<endl;
	  	
	  }
  	else
	  
	  {
  		
  		cout<<"Hot:"<<endl;
  		
	  }
  	
  }
	
    void displaySensor() {
    	
    	cout<<"Temperature:"<<temperature<<endl;
    	cout<<"Location:"<<location<<endl;
    	cout<<"Sensor ID:"<<sensorID<<endl;
    	 	
    	
	}
	
	
};

int main (){
	
	TemperatureSensor t1;
	TemperatureSensor t2(25, "Lahore" , 123210);
	
	
	
	
     t1.settemperature(23);
     cout<<t1.gettemperature()<<endl;
     
     
     cout<<"Default Constructor:"<<endl;
     t1.checkStatus();
     t1.displaySensor();
     
     
     
     cout<<"parametirize Constructor:"<<endl;
     t2.checkStatus();
     t2.displaySensor();
     
	
	 return 0;

	
}


















