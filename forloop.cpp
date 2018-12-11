#include<iostream>
#include<array>

int main()
{

	std::array<int, 5> myArray { 9, 7, 5, 3, 1 };
 
//	for (auto &element : myArray)
//	{
  //  	std::cout << element << ' ';
   // }
  	std::cout << myArray[2]<<endl;
    return 0;
}
