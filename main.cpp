#include<iostream>
#include "calculator.h"
using namespace std;

int main() {
	calculator a;
	int x, y ,c[5];
  //getting values from client
	cout << "Enter starting number : ";
	cin >>x;
	cout << "Enter Ending  number :  ";
	cin >> y;

//checking five numbers
	// for(int i=0;i<5;i++){
	// 	cout<<"Get the git id ";
	// 	cin>>c[i];
		
	// }

	a.setValue(x, y);
	a.display();
}