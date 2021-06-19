#include<iostream>
#include "calculator.h"
using namespace std;

int main() {
	calculator a;
	int x, y;

	cout << "Enter starting number : ";
	cin >>x;
	cout << "Enter Ending  number :  ";
	cin >> y;
	a.setValue(x, y);
	a.display();
}