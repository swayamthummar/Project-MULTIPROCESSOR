#include<iostream>
using namespace std;

class A
{
	public:
		void student()
		{
			cout<<"Student's Name is Swayam Thummar."<<endl;
		}
};
class B : public A
{
	public:
		
	void student()
	{
		cout<<"Student's ID is 1."<<endl;
	}
};

int main()
{
	 B o1;
	
	o1.student();
	o1.A::student();
	return 0;
}
