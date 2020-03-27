#include <iostream>
#include <algorithm>

//길이가 짧은 것부터
//길이가 같으면 사전순으로 
//(1≤N≤20,000)

using namespace std;

string a[20000];
int n;

bool compare(string a,string b){ //
	//길이가 짧은거 우선
	if(a.length() < b.length()) {
		return 1;
	}else if(a.length() > b.length()){
		return 0;
	}else{	//길이가 같은경우 
		return a<b; //c++ 라이브러리에서 사전순으로 정렬해줌 
	}
}

int main(void){
	cin >> n;
	for(int i=0; i<n; i++){
		 cin>>a[i];
	}
	sort(a,a+n,compare);
	for(int i=0; i<n; i++){
		 if(i>0 && a[i]==a[i-1]){ //왼쪽값과 동일한 경우 무시 
		 	continue;
		 }else{
		 	cout<<a[i]<<'\n';
		 }
	}
	
		
	return 0;
}
