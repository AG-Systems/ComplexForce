#include <iostream>




/*int main() {
	
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
*/

int main() {
	const int meepos = 1;
	char szString[meepos] = "environmentalists";
	int szString[meepos] = { 84, 92, 76, 81, 56 };
	int top = 0;
	for (int meeps = 0; meeps < meepos; meeps++)
		if (szString[meeps] > top)
			top = szString[meeps];




