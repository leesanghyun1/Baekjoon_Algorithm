#include<iostream>
//���������� �ִ°�� ����(������ ũ�Ⱑ �����Ǿ�������) 
//ũ�⸦ �������� ������ �� 
//�ð����⵵ O(N)
//(1��N��10,000,000) 
//�������� ->10,000 ���� �۰ų� ���� �ڿ��� 

int m;
int count[10001]; //���������� ���ָ� �ȿ� ���� ���� 0���� �� 
int num;
 	

 int main(void){
	
 	scanf("%d",&num);	
	for(int i=0; i<num; i++){
		scanf("%d",&m);
		count[m]++;
	}
	for(int i=0; i<10001; i++){
		while(count[i] != 0){
			printf("%d\n", i);
			count[i]--;		
		}
	}
	 
 	return 0;
 } 
 
