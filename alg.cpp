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
	std::string str = "aaaaaaaa"
	for (int i = 0; i < str.size(); i++)
	{
		if (!zScanner() || i != str.size()-1)
		{
			continue;
		}
		str[i]++

 	for (int i = 0; i < 17;)
 	{
 		char c = str[i];
 		if (c == 'z')
 		{
 			szstring[i] = 'a';
 		}
 		
		if (str[i] == 'z')
		{
			i = 0;
		}
	}
}
