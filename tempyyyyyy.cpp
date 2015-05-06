#include <iostream>
#include <string>

bool zScanner(const std::string& str, int i)
{
	for (int j = 0; j < str.size(); ++j)
	{
		if (str[j] != 'z')
		{
			return false;
		}
	}
	return true;
}


int main()
{
	std::string str = "aaaaaaaa";
	std::cout << str << std::endl;

	for (int i = 0; i < str.size(); i++)
	{
		for (int z = 0; z < 26; ++z)
		{
			str[i]++;
			//for (int q = 0; q < 19; q++)
 			//{
 				char c = str[z];
 				if (c == 'z' || c == '{')
 				{
 					std::cout << str << std::endl;
 					
 					str[z] = 'a';
 					
 				}
				/* if (str[i] == 'z')
				{
					i = 0;
				}
				*/
				std::cout << str << std::endl;	
			//}
		}
		if (zScanner(str, i) || i != str.size()-1)
		{
			continue;
		}
	}
}
