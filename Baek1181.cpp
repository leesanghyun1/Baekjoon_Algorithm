#include <iostream>
#include <algorithm>

//���̰� ª�� �ͺ���
//���̰� ������ ���������� 
//(1��N��20,000)

using namespace std;

string a[20000];
int n;

bool compare(string a,string b){ //
	//���̰� ª���� �켱
	if(a.length() < b.length()) {
		return 1;
	}else if(a.length() > b.length()){
		return 0;
	}else{	//���̰� ������� 
		return a<b; //c++ ���̺귯������ ���������� �������� 
	}
}

int main(void){
	cin >> n;
	for(int i=0; i<n; i++){
		 cin>>a[i];
	}
	sort(a,a+n,compare);
	for(int i=0; i<n; i++){
		 if(i>0 && a[i]==a[i-1]){ //���ʰ��� ������ ��� ���� 
		 	continue;
		 }else{
		 	cout<<a[i]<<'\n';
		 }
	}
	
		
	return 0;
}
