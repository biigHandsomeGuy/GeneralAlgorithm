#include <iostream>
#include "GeneralAlgorithm.h"


int main()
{
	std::vector<int> v{ 1,2,3,4,5 };

	for(int i = 0; i < 10; i++)
	{
		v = GA::ShuffleAlgorithm(v);

		for (int i : v)
		{
			std::cout << i << " ";
		}
		std::cout <<  std::endl;
	}

}