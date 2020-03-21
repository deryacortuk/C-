#include<iostream>

using namespace std;

int main(){
	
	char d;
	cout << "please enter capitals:";
	cin >>d;
	
	
	for(int i=d-65; i< 41; i++){
		
		for(int j=d-65; j<=i; j++){
			cout << (char)(j+65)<<" ";
			
		}
		for(int k=i-1; k>d-65; k--){
			cout << (char)(k+65);
			
		}
		cout<< endl;
	}
	
	
	
	
	return 0;
}
