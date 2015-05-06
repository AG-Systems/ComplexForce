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

	for (int i = 0; i < str.size(); i++)
	{
		for (int z = 0; z < 26; ++z)
		{
			str[i]++;
			//for (int q = 0; q < 19; q++)
 			//{
 				char c = str[q];
 				if (c == 'z')
 				{
 					std::cout << str << std::endl;
 					str[q] = 'a';
 					str[q]++;
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
