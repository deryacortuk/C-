#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	

	int n;
	cout << "how many dice:" ;
	cin >>n;
	srand(time(NULL));
	int score=0;
	int x1[n];
	int y1[n];
	

	for(int i = 0;i<n;i++){
		int x = rand()%6+1;
		int y = rand()%6+1;
		
		x1[i]=x;
		y1[i]=y;
		
		if(x>y){
			
			score++;
			
		}else if(x<y){
			score--;
		}
		
		
	}
	cout << "1.player: ";
	for(int i=0; i<n;i++){
	
		cout  <<  x1[i] << " " ;
		
		
	}
    cout <<endl;
    cout <<"2.player :" ;
	for(int i=0; i<n; i++){
		
		cout << y1[i]<< " " ;
	
	}
	cout <<endl;
	
	if(score>0){
		cout << "1.player won." <<endl; 
	}else if(score<0){
		cout <<"2.player won." <<endl;
	}else{
		cout <<"deuce!";
	}
	
	return 0;
	
}
