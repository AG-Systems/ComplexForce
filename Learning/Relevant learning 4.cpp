#include <iostream> 
#include <stdlib.h>
 int main() {
 	char szstring[] = "environmentalists";
 	for (int i = 0; i < 17; i++)
 	{
 		char c = szstring[i];
 		if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
 		{
 		  int node, tron;
 		  srand (time(NULL));
 		  node = rand() % 5 + 1;
 		    if( node == 1 ) {
 		    szstring[i] = 'a';
 		    }
 		    
 		    else if ( node == 2) {
 		   szstring[i] = 'e';
 		   }
 		    
 		    else if ( node == 3) {
 		    szstring[i] = 'u'; 
 		    }
 		    
 		    else if ( node == 4) {
 		    szstring[i] = 'o'; }
 		    
 		    else if ( node == 5) {
 		    szstring[i] = 'i';}
 		}
 	}	
 	for (int b = 0; b < 17; b++)
 	{
 		std::cout << szstring[b] << std::endl;
 	}
}


