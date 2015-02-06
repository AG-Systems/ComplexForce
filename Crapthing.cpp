#include <iostream> 
 int main() {
 	char szstring[] = "environmentalists";
 	for (int i = 0; i < 17; i++)
 	{
 		char c = szstring[i];
 		if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
 		{
 			szstring[i] = '@';
 		}
 	}

 	std::cout << szstring << std::endl;
 }
