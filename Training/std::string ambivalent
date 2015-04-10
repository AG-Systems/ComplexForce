#include <iostream>
#include <string>

std::string ambivalent = "ambivalent";

int main()
{
	for (int i = 0; i < ambivalent.length(); ++i)
	{
		std::cout << ambivalent[i] << std::endl;
	}
	ambivalent.replace(9, 2, "ce");
	std::cout << ambivalent << std::endl;
	
	for (int i = 0; i < 21; ++i)
	{
		char a = ambivalent[9];
		a++;
		std::string str(1, a);
		ambivalent.replace(9, 1, str );
		std::cout << ambivalent << std::endl;
		ambivalent.replace(10, 1, str);
		
		
		for (int j = 0; j < 21; ++j)
		{
			char b = ambivalent[10]; //what positon the character will be placed
			b++;
			std::string str(1, b); // how many times the temp string will be copied
			ambivalent.replace(10, 1, str);
			if (b == 123)
			{
				ambivalent.replace(10, 1, str);
				break;
				
				
			}
			std::cout << ambivalent << std::endl;
		}
	}

	std::cin.get();
}
