#include<stdio.h>
#include<string.h>
/*Struct Yapisi Kullanilarak Ad ve Soyad Girisi*/
struct Kimlik{
	char ad[100];
	char soyad[100];
}kimlik1,kimlik2;

void yazdir(struct Kimlik *kimlik);

int main(){
	//struct Kimlik kimlik1;
	//struct Kimlik kimlik2;
	yazdir(&kimlik1);
	yazdir(&kimlik2);
	return 0;
}

void yazdir(struct Kimlik *kimlik){
	gets(kimlik->ad);
	gets(kimlik->soyad);
	printf("%s %s\n",kimlik->ad,kimlik->soyad);
}
