#include<iostream>
using namespace std;
//class B;
class A
{
   int a;
   public:
   A()
   {
   	a=10;
   }
   	void add_datA(B &ob)
		{
			cout<<a+ob.b;
		}
   friend class B;	
   
};

class B
{
	int b;
	public:
		B()
		{
			b=20;
		}
		void add_data(A &ob)
		{
			cout<<b+ob.a;
		}
		friend class A;
	
};
main()
{
A obj;
B obj1;
obj.add_datA(obj1);
}
