#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Malloc kullan�m�
int main()
{
   char *str;
	//bellekte yer a��l�r
   str = (char *) malloc(15);
   strcpy(str, "KTU");
   printf("String = %s,  Address = %u\n", str, str);

   //a��lan yerin alan�n �st�ne yaz�larak tekrar kullan�m�
   str = (char *) realloc(str, 25);
   strcat(str, "CEC"); //string leri birle�tirir.
   printf("String = %s,  Address = %u\n", str, str);

   free(str); //str i�in mallocla a��lan alan� serbest b�rak�r
   
   return(0);
}
//Tutorialspoint den al�nm��t�r
