#include<iostream>

using namespace std;


int *new_array(size_t size, int init_value=0){
	int *new_storage;
	new_storage = new int[size];
	for(size_t i{0} ; i<size; i++)
	   *(new_storage + i) = init_value;
	return new_storage;
}

void show(const int *const array, size_t size){
	
	for(size_t i{0}; i<size; i++)
	   cout<< array[i] << endl;
}
int main(){
	
	int *main_array;
	size_t size;
	int init_value{};
	cout<< "How many integers would like to allocate? " ;
	cin>> size;
	cout<< "what value would you like them initialized to? ";
	cin>> init_value;
	
	main_array = new_array(size, init_value);
	
	cout <<"--------------------"<< endl;
	
	show(main_array, size);
	delete[] main_array;
	
	return 0;
}
