#include<iostream>

using namespace std;


int power(int x,int y){
	int result = 1;
	for(int i=1; i<=y ; i++){
		
		result = result*x;
	}
	return result;
	
}
int main(){
	int z;
	cout << "please enter a number:" ;
	cin >>z;
		
	for(int i=0; i<=z; i++){
		
		cout << power(2,i) << endl;
		
	}
	
	
	
	return 0;
}
