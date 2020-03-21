#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char c[100];
	bool palindrome = true;
	cout <<"please enter message: " ;
	cin >> c;
	char *p,*q;
	p=c;
	q=c;
	while(*q!='\0'){
		
		q++;
		
	}
	
	q--;
	while(q>p){
		
	if(*p!=*q){
		palindrome = false;
	}
	p++;
    q--;
}
if(palindrome){
	cout << c << "  is a palindrome.";
}else{
	cout << c << "  is not a palindrome.";
}
	
	return 0;
	
}
