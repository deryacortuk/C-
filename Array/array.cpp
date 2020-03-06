#include <iostream>
using namespace std;

int main(){
	int matrix[3][3];
	/*cout<<matrix[0][1] <<endl;
	cout<<matrix[1][2] <<endl;
	cout<<matrix[2][3] <<endl;
	for (int i= 0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << "i and j " << i << " : " << j <<endl;
			
			cout << matrix [i][j] << " ";
		}
		cout << endl;
	} */
	 cout << "enter matrix values: " <<endl;
	
	for(int i = 0; i<3; i++){
		for(int j=0; j<3; j++){
			cin >> matrix [i][j];
			
		}
	}
	cout << "matrix: " << endl;
	
	for(int i = 0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << matrix [i][j] <<" ";
			
		}
		cout << endl;
	}
	
	return 0;
}
