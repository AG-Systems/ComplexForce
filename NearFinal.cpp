#include <iostream>
#include <ctime>
#include <algorithm>
#include <string>
 

int brute(std::string pass, std::string temp)
{

	int app = temp.length();

	if (pass.length() < app)
	{
		for (int z = 0; z< app; z++)
		{
			std::cout << pass << temp[z] << std::endl;
			brute(pass + temp[z], temp);
		}
	}
	return 0;
}

int main()
{

	std::string password;
	std::string gen;
	char mode;
	std::cout << "Please enter the mode: " << std::endl;
	std::cout << "Press 1 for only numbers" << std::endl;
	std::cout << "Press 2 for only alphabetic letters" << std::endl;
	std::cout << "Press 3 for custom specfic letters" << std::endl;

	std::cin >> mode;
	if (mode == '3')
	{
		std::cout << "Please enter the following characters you want to use: " << std::endl;
		std::string enter;
		std::cin >> enter;
		std::cout << "loading program... " << std::endl;
		std::cout << "Please recomfirm your password:" << std::endl;
		std::cin >> enter;
		std::cout << "Are you sure? No turning back. For the final step please recomfirm your password: " << std::endl;
	}
	if (mode == '2')
	{
		std::cout << "Please enter the password: " << std::endl;
		std::cin >> password;
	}
	if (mode == '1')
	{
		std::cout << "Please enter the password: " << std::endl;
		std::cin >> password;
	}
	clock_t start_t, end_t;

	if (mode == '1')
	{
		const char num[10] =
		{
			'1', '2', '3', '4', '5', '6', '7',
			'8', '9', '0'
		};
		char numy[] = { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1' };
		while (password.compare(gen) != 0)
		{
			numy[0]++;
			for (int i = 0; i < password.length(); i++){
				if (numy[i] == '0' + 1)
				{
					numy[i] = '1';
					numy[i + 1]++;
				}
				gen = numy[password.length() - 2];
			}

			for (int i = password.length() - 1; i >= 0; i--)
				gen += numy[i];

			std::cout << gen << std::endl;
		}

	} 
	if (mode == '2')
	{

		const char alpha[26] =
		{
			'a', 'b', 'c', 'd', 'e', 'f', 'g',
			'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'q', 'r', 's', 't', 'u',
			'v', 'w', 'x', 'y', 'z'
		};

		char array[] = { 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a' };
		while (password.compare(gen) != 0)
		{
			array[0]++;
			for (int i = 0; i < password.length(); i++){
				if (array[i] == 'z' + 1)
				{
					array[i] = 'a';
					array[i + 1]++;
				}
				gen = array[password.length() - 2];
			}

			for (int i = password.length() - 1; i >= 0; i--)
				gen += array[i];

			std::cout << gen << std::endl;
		}


	}
	else if (mode == '3')
		{
			std::string enter;
			std::cin >> enter;
			brute("", enter);
			std::cout << brute << std::endl;
		}
	std::cout << "Password has been cracked!" << std::endl;
	system("PAUSE");

	}
	


