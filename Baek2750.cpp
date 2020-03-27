#include <stdio.h>

int data[1001];

void selecSort(int *data,int number){
	int min,max,index,temp;
	
	for(int i=0; i<number; i++){
		min=1001;
		for(int j=i; j<number; j++){
			if(min > data[j]){
				min = data[j];
				index = j;
			}	
		}
		temp=data[i];
		data[i]=data[index];
		data[index]=temp;
	}
	
}

int main(void){
	int number;
	scanf("%d",&number);
	
	for(int i = 0; i < number; i++){
	scanf("%d",&data[i]);	
	}
	
	selecSort(data,number);
	
	for(int i = 0; i < number; i++){
	printf("%d\n",data[i]);	
	}
}
