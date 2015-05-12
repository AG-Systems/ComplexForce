#include <iostream>
#include <string>


int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int h = 8;
int i = 9;
int j = 10;
int k = 11;
int l = 12;
int m = 13;
int n = 14;
int o = 15;
int p = 16;
int q = 17;
int r = 18;
int s = 19;
int t = 20;
int u = 21;
int v = 22;
int w = 23;
int x = 24;
int y = 25;
int z = 26;

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
	std::string enter;
	std::string abc = "abcdefghijklmnopqrstuvwxyz";
	std::string num = "1234567890";
	std::cin >> enter;
	
	brute("", enter);
	std::cout << brute << std::endl;
	system("PAUSE");
	return 0;

}



/*
char z = pass[4];
z++;
std::string str(1, z);


aaaa.replace(3, 1, str);
std::cout << aaaa << std::endl;
if (z > 97 || z < 123)
continue;
aaaa.replace(2, 1, str);
std::cout << aaaa << std::endl;
if (z > 97 || z < 123)
continue;

*/
