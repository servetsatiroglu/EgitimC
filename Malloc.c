#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Malloc kullanimi
int main()
{
   char *str;
	//bellekte yer açilir
   str = (char *) malloc(15);
   strcpy(str, "KTU");
   printf("String = %s,  Address = %u\n", str, str);

   //açilan yerin alanin üstüne yazilarak tekrar kullanimi
   str = (char *) realloc(str, 25);
   strcat(str, "CEC"); //string leri birlestirir.
   printf("String = %s,  Address = %u\n", str, str);

   free(str); //str için mallocla açilan alani serbest birakir
   
   return(0);
}
//Tutorialspoint den alinmistir
