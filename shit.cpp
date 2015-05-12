#include <iostream>
#include <string>
#include <algorithm>


bool zScanner(const std::string& str, int i)
{
	for (int j = 0; j < str.size(); ++j)
	{
		if (str[j] != 'z') // if j = z then it will return false //
		{
			return false;
		}
	}
	return true;
}


int main()
{
	std::string str = "aaaaaaaa";
	std::string meeps = "z";
	std::cout << str << std::endl;
	for (int i = 0; i < str.size(); i++)
	{
		if (!zScanner(str, i) || i != str.size() - 1) // if zscanner is false then it will go back into the loop. If the size does not equel to the string -1(Because in a string it adds a empty character to the end ) it will go back to the loop.
		{
			for (int a = 0; a < str.size(); a++)
			{
				continue;
			}
		}
		str[i]++; // Adds to the value. Ex: a-z
		std::cout << str << std::endl;

		for (i = 0; i < 20;) // 
		{
			str[i]++;
			std::cout << str << std::endl;
			char c = str[i];
			if (c == 'z') // if a character = z then it will reset to a 
			{
				str[i] = 'a';
				i++;
				if (i == str.size()-1)
				{
					i = 0;
				}
				if (!zScanner(str, i))
				{
					str[i]++;

				}
			}
		}
	}
}
