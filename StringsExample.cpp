#include <iostream>


int meeps[5];

int main() {
	char szString[] = "environmentalists";
	szString[0] = 'A';
	szString[3] = 'e';
	szString[5] = 'e';
	szString[8] = 'o';
	szString[11] = 'i';
	szString[14] = 'o';
	std::cout << szString << std::endl;
	system("pause");
}
