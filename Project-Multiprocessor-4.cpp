#include<iostream>
using namespace std;

class A
{
  public:
  int x;
  
  void set(int x)
  {
  	this->x = x;
  }	
  
  void get()
  {
  	cout<<"Value of X -> "<< x <<endl;
  }
  
  operator++(int)
  {
  	return x++;
  }
  operator--(int)
  {
  	return x--;
  }
};

int main()
{
	A o1;
	
	o1.set(9);
	cout<<"the Value:- "<<endl;
	o1.get();
	cout<<endl;
	o1++;
	cout<<"increment operator(++):- "<<endl;
	o1.get();
	cout<<endl;
	o1--;
	cout<<"decrement operator(--):- "<<endl;
	o1.get();
	return 0;
}
