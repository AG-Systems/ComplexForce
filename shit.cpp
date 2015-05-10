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

bool brute(const std::string& str, int i)
{
	for (int v = 0; v < str.size(); ++v)
	{
		if (str[v] != 'a' || str[v] != 'b' || str[v] != 'c' || str[v] != 'd' || str[v] != 'e' || str[v] != 'f' || str[v] != 'g' || str[v] != 'h' || str[v] != 'i' || str[v] != 'j' || str[v] != 'k' || str[v] != 'l' || str[v] != 'm' || str[v] != 'n' || str[v] != 'o' || str[v] != 'p' || str[v] != 'q' || str[v] != 'r' || str[v] != 's' || str[v] != 't' || str[v] != 'u' || str[v] != 'v' || str[v] != 'w' || str[v] != 'x' || str[v] != 'y') // if j = z then it will return false //
		{
			return true;
		}
	}
	return false;
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
			//continue; // goes back to the loop
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
			if (c == 'c') // if a character = z then it will reset to a 
			{
				std::cout << str << std::endl;
				str[i] = 'a'; // resets it
				i++;
				str[i]++;
				i--;
				str[i]++;
				//i++;
				std::cout << str << std::endl;
			}

			if (str[i] == 'c') // This resets the loop 
			{
				i = 0;
			}


			
		}
	}
}
