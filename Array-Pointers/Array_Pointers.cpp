#include<iostream>

using namespace std;

int main(){
	
	int prime_numbers[] {7,17,71};
	cout<< "Prime Numbers: " << prime_numbers << endl;
	
	int *number_ptr{prime_numbers};
	
	cout << "\nArray subscript notation ------" << endl;
	cout << prime_numbers[0] <<endl;
	cout << prime_numbers[1] <<endl;
	cout << prime_numbers[2] << endl;
	
	cout << "\nPointer subscript notation-----" << endl;
	cout << number_ptr[0] << endl;
	cout << number_ptr[1]<< endl;
	cout << number_ptr[2] <<endl;
	
	cout <<"\Pointer offset notation--------" <<endl;
	cout << *number_ptr <<endl;
	cout << *(number_ptr +1) <<endl;
	cout << *(number_ptr +2)<<endl;
	 
	cout << "\n Array offset notation--------" <<endl;
	cout << *prime_numbers <<endl;
	cout << *(prime_numbers+1) <<endl;
	cout << *(prime_numbers +2) << endl;
	
	return 0;
}
