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
		if (!zScanner(str, i) || i != str.size()-1)
		{
			continue;
		}
		str[i]++;

 	for ( i = 0; i < 17;)
 	{
 		char c = str[i];
 		if (c == 'z')
 		{
 			str[i] = 'a';
 		}
 		
		if (str[i] == 'z')
		{
			i = 0;
		}
		std::cout << str << std::endl;

		}
	}
}
