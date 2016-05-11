#include<stdio.h>
//Matrisin Elemanlarýný Ýndisleri Çarpýmý Yapýyor
void myIntialize(int *param,const int rows,const int columns);

int main (){
	int myArray[5][5];
	
	int index1,index2;
	myIntialize(&myArray[0][0],5,5);
	
	printf("GUNCELLENMIS DIZI:\n");
	
	for(index1=0;index1<5;index1++){
		for(index2=0;index2<5;index2++){
			printf("%d\t",myArray[index1][index2]);
		}
		printf("\n");	
	}
	
	return 0;
}
void myIntialize(int *param,const int rows,const int columns){
	
	int index1,index2;
	
	for(index1=0;index1<rows;index1++){
		for(index2=0;index2<columns;index2++){
			*param = (index1*index2);
			param++;
		}	
	}
}
