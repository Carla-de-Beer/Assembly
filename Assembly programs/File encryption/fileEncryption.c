// Carla de Beer

// Assembly function, called via this C-function, 
// that reads and encrypts the data contained inside a given .txt file. 

// Date created: 31/10/2014

#include <stdio.h>

extern void encrypt(char *public, char *secret);

int main()
{	
	char public[] = "public.txt";
	char secret[] = "secret.txt";
	encrypt(public,secret);
	return 0;
}
