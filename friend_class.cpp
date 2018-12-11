#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	public:
		A()
		{
			a = 5;
		}
		friend class B; //declaration of a friend class
};

class B
{
	private:
		int b;
	public:
		void showA(A& x)
		{
			// since B is a friend class of A, it can access private members of A
				cout << "class A a value: " << x.a << endl;
		}
};

int main()
{
	A a;
	B b;
	b.showA(a);
	return 0;
}

