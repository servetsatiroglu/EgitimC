#include<stdio.h>
int main(){
	int sayi,i=2;
	printf("Bolenlerini Bulmak Istediginiz Sayiyi Giriniz : ");
	scanf("%d",&sayi);
	for(i;i<sayi;i++){
		if (sayi % i == 0){
			printf("\n\t%d",i);
		}
	}
	return 0;
}
