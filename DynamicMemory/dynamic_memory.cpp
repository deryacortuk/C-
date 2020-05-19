#include<iostream>;

using namespace std;

int main(){
	int *int_ptr;
	int_ptr = new int;   // allocate an int on the heap
	cout<< int_ptr << endl;
	delete int_ptr;      // free the allocated storage
	
	cout << "-------------------------------" <<endl;
	
	size_t size{0};
	double * temp_ptr;
	cout << "How many temps?: " ;
	cin >> size;
	
	
	temp_ptr = new double[size];    //allocate storage on the heap  for an array
	
	cout << temp_ptr ;
	
	delete [] temp_ptr;        //free allocated storage
	
	
	return 0;
}
