#include <iostream>

using namespace std;
int main(){ 

	int *x;
	int size;
	cout << "how many values save: " ;
	cin >> size;
	x = new int[size];     // it saved memory according to size.
	for(int i= 0; i<size; i++){
		cout << "value: " ;
		cin >> x[i];
		
	}
	for(int i=0; i< size; i++){
		cout << "Value: " << x[i] << endl;
		
	}
	delete [] x;    //it cleaned out  memory.
	return 0;
}
