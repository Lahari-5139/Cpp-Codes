#include<iostream>
using namespace std;

class B;

class A
{
	public:
		void showB(B );
};

class B
{
	private: 
		int b;
	public:
		B()
		{
			b = 5;
		}
		friend void A::showB(B x); // declaration of a friend function
};

void A::showB(B x)
{
		//since show() is friend of B, it can access private members of B
		cout << "Class B value of b: " << x.b << endl;
}

int main()
{
	A a;
	B x;
	a.showB(x);
	return 0;
}
