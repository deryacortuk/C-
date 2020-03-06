#include <iostream>
using namespace std;
void factorial(int x){
	 int factorial = 1;
	 for(int i= 2; i<= x; i++){
	 	factorial *=i;
	 }
	 
	 cout << "factorial: " << factorial << endl;
}
int main(){
	int y;
	cout << "number: ";
	cin >> y;
	factorial(y);
	
	return 0;
}
