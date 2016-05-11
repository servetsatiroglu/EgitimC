#include <stdio.h>
int main(){
	int islem,sonuc,sayi1,sayi2;
	printf("toplama icin 1 \ncikarma icin 2 \nbolme   icin 3 \ncarpma  icin 4\t yazin\n");
	scanf("%d",&islem);
	printf("1.sayiyi giriniz\n");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz\n");
	scanf("%d",&sayi2);
	switch(islem)
	{
		case 1:
			sonuc = sayi1 + sayi2;
			printf("sonuc = %d",sonuc);
			break;
		case 2:
			sonuc = sayi1 - sayi2;
			printf("sonuc = %d",sonuc);
			break;
		case 3:
			sonuc = sayi1 / sayi2;
			if(sayi1 % sayi2 != 0){
				printf("sonuc yaklasik = %d",sonuc);
			}
			else{
				printf("sonuc = %d",sonuc);
			}
			break;
		case 4:
			sonuc = sayi1 * sayi2;
			printf("sonuc = %d",sonuc);
			break;
		default:
			printf("Yanlis Secim Yaptiniz!");
	}
	return 0;
}
