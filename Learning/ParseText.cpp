#include <iostream>
#include <algorithm>
#include <string>

bool onoff(char c)
{
	switch (c)
	{
	case '[':
	case ']':
	case '3':
	case 'cpp':
	case '.':
	case ',':
		return true;
	default:
		return false;
	}
}

int main()
{
	std::string szString("[foobar2000.cpp, 3]");
		szString.erase(std::remove_if(szString.begin(), szString.end(), &onoff), szString.end());
		std::cout << szString << std::endl; 
			system("pause");
}
