#include<stdio.h>
 //Fonksiyon İle Faktoriyel Hesaplama
long faktoriyel(int);
 
int main()
{
  int sayi;
 
  printf("Bir Sayi Giriniz:\n");
  scanf("%d", &sayi); 
 
  if (sayi < 0)
    printf("Negatif Bir Sayi Girdiniz!\n");
  else
  {
    printf("%d! = %ld\n", sayi,faktoriyel(sayi));
  }
 
  return 0;
}
 
long faktoriyel(int sayi1)
{
  if (sayi1 == 0)
    return 1;
  else
    return(sayi1 * faktoriyel(sayi1-1));
}
