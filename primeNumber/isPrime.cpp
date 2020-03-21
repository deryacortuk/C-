#include<iostream>

using namespace std;



bool isPrime(int x){
	
	for(int i=2; i<x; i++){
		
		if(x%i ==0){
			cout << x << " is not a prime number" <<endl;
			return false;
		}
	}
	cout << x <<" is a prime number" << endl;
	return true;
}
int main(){
	int y;
	cout <<"please enter a number:";
	cin >>y ;
	cout << isPrime(y) << endl;
	return 0;
}
