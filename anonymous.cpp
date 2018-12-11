#include<iostream>
using namespace std;

class A
{
	private:
		int _a;
	public:
		A(int a)
		{
			_a = a;
		}
		int get_a()
		{
			return _a;
		}
};

void print (A a)
{
	cout << a.get_a() <<endl;
}

int main()
{
	A a(5);
	cout << "this is normal: ";
	print (a);
	cout << "this is by anonymous obj: ";
	print (A(5));
	return 0;
}
