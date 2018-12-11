#include<iostream>
#include<string>
using namespace std;

class MyClass
{
//	public:
//		string name;
		public:
			MyClass(string z)
			{
				cout<<"this is by constructor"<<endl;
				setName(z);
			}
			void setName(string x)
			{
				name = x;
			}
			string getName()
			{
				return name;
			}
		private:
			string name;
};

int main()
{
	MyClass me("lahari");
	//me.name = "Lahari";
	//cout << me.name;
	//me.setName("Lahari");
	cout << me.getName() << endl;
	return 0;
}
