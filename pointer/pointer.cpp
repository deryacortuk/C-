#include<iostream>

using namespace std;

int f(int *x, int size){
	int max = x[0];
	int min = x[0];
	for( int i = 0; i<size; i++){
		if(x[i]>max){
			max =x[i];
			
		}
		if(min >x[i]){
			min = x[i];
		}
	}
	cout << max << endl << min << endl;
	return max *min;
}

int main(){
	
	int y[13] = {11,4,3,2,6,5,23,56,71,17,23,43,41};
cout << f(y,13) << endl;
	
	
	
	return 0;
}
