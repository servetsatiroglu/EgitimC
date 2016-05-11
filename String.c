#include<stdio.h>
#include<string.h>
//Girilen Kelimenin Ýçerisinden a ve b Harflerini Çýkarýr
int main(){
	int i=0;
	char s[100];
	gets(s);
	while(s[i] != '\0'){
		if(s[i] == 'a' || s[i] == 'b'){
			//printf("%c\n",s[i]);
			i++;
			continue;
		}
		printf("%c",s[i]);
		i++;
	}
	//printf("\n%s",s);
	//printf("\n%d",sizeof(s));
	return 0;
}
