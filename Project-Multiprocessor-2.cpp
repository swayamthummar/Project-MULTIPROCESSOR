#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
	public :
		void set_1()
		{
			cout<<"Employee Name is Swayam"<<endl<<endl;
		}
		
		void set_2(int id)
		{
			cout<<"Swayam's Id is -"<<id<<endl<<endl;
		}
		
		void set_3(char exp[],int b)
		{
			cout<<"Swayam has experience of "<< exp <<endl<<endl<< "He is "<< b <<" years old"<<endl<<endl;
		}
		
		void set_4(char a[],char s[])
		{
			cout<<"He is Brilliant in "<< a <<endl<<endl<<"his salary is "<< s <<endl;
		}
};
int main()
{
   Employee e;
	
	e.set_1();
	e.set_2(1);
	e.set_3("2 years",21);
	e.set_4("Programming","80,000");
	return 0;
}
