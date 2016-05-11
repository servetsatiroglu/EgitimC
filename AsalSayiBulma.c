#include<stdio.h>
int main(){
	int i=2,sayi,degisken;
	printf("Sayi Giriniz : ");
	scanf("%d",&sayi);
	for (i;i<sayi;i++){
		if (sayi % i == 0){
				degisken = 0;
				break;
			}
	}
	if(degisken == 1)
		printf("\nSayi Asaldir");
	else
		printf("\nSayi Asal Degildir");
	return 0;
}
