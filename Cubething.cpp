 #include <iostream>

enum Methods 
{
	NUMBERS,
	ALPHA,
	ALPHANUMERIC
};

int main() 
{
	int tron;
	int node;
	int genNum;
	int brute;
	
	std::cout << "What method do you want to use to brute force?" << std::endl;
	std::cin >> brute;
	
	Methods method;

  	switch (brute) 
  	{
	case 1:
    	method = NUMBERS;
  		break;
  	case 2:
    	method = ALPHA;
  		break;
  	case 3:
    	method = ALPHANUMERIC;
  		break;
  	}

	switch (method) 
	{
	case NUMBERS:
		std::cout << "123456789 password cracked" << std::endl;
	  	break;
	case ALPHA:
	    std::cout << "meepo is hot passsword cracked" << std::endl;
	  	break;
	case ALPHANUMERIC:
	    std::cout << "meepo is hot4 password cracked" << std::endl;
	  	break;
	}
}
