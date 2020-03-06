#include<iostream>
using namespace std;
int main(){
	int x,y;
	string operation;
	cout << "calculation machine" << endl;
	cout << "1.operation: addition" <<endl;
	cout << "2.operation: subtraction" <<endl;
	cout << "3.operation: multiplication" <<endl;
	cout << "1.operation: division" <<endl;
	cout <<"choose operation:" ;
	
	cin >> operation ;
	cout << "1.number:";	
	cin >> x;
	cout <<"2.number:" ;
	cin >>y;
	if(operation =="1"){
		cout << "result:" << x+y << endl;
	}else if(operation=="2"){
		cout <<"result:" << x-y << endl;
	}else if (operation == "3"){
		cout <<"result:" <<x*y << endl;
	}else{
		if(y==0){
			cout << "zero division error";
		}
		cout << "result:" << x/y<< endl;
	}
	
	return 0;
}
