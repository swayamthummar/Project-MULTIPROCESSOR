#include<iostream>
#include<string.h>
using namespace std;

class Message
{
	private :
		char Message_1[];
		
		public :
			Message(char Message_2[])
			{
				strcpy(Message_1,Message_2);
			}
			void set(char Message_2[])
			{
				cout<<Message_1<<" "<<Message_2<<endl;
			}
};
int main()
{
	Message m("My name is");
	m.set("Swayam Thummar.");
}
