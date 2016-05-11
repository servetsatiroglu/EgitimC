#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Malloc kullanýmý
int main()
{
   char *str;
	//bellekte yer açýlýr
   str = (char *) malloc(15);
   strcpy(str, "KTU");
   printf("String = %s,  Address = %u\n", str, str);

   //açýlan yerin alanýn üstüne yazýlarak tekrar kullanýmý
   str = (char *) realloc(str, 25);
   strcat(str, "CEC"); //string leri birleþtirir.
   printf("String = %s,  Address = %u\n", str, str);

   free(str); //str için mallocla açýlan alaný serbest býrakýr
   
   return(0);
}
//Tutorialspoint den alýnmýþtýr
