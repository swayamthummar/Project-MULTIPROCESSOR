#include<iostream>
using namespace std;
class Distance
{
	public:
	int d;
	void set(int d)
	{
		this->d = d;
	}
	void get()
	{
		cout<<"Distance -> "<< d <<endl;
	}
	
	Distance operator+(Distance x)
	{
		Distance temp;
		temp.d = this->d+x.d;
		return temp;
	}
	
};
int main()
{
	Distance d1,d2,d3;
	
	cout<<"------Distance_1------ :-"<<endl;
	d1.set(499999);
	d1.get();
	cout<<endl;
	
	cout<<"------Distance_2------ :-"<<endl;
	d2.set(1);
	d2.get();
	cout<<endl;
	
	cout<<"------Addition------ :-"<<endl;
	d3=d1+d2;
	d3.get();
	return 0;
}
