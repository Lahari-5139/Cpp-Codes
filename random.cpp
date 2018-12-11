#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));//used to generate diff values each time we execute the random function
	for (int i = 0;i<25;i++)
	{
		cout << rand()%6 <<endl;
	}
}

