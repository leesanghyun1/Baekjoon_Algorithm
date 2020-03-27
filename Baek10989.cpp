#include<iostream>
//범위조건이 있는경우 빠름(데이터 크기가 한정되어있을때) 
//크기를 기준으로 갯수를 셈 
//시간복잡도 O(N)
//(1≤N≤10,000,000) 
//범위조건 ->10,000 보다 작거나 같은 자연수 

int m;
int count[10001]; //전역변수로 해주면 안에 값이 전부 0으로 들어감 
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
 
