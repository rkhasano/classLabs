#include<iostream>
#include<string>
using namespace std;

int main()
{
	int* myInt;
	string* myStr;
	float* myFloat;

	myInt = new int;
	myStr = new string;
	myFloat = new float;

	*myInt = 20;
	*myStr = "Ruslan";
	*myFloat = 199.99;

	cout << *myInt <<" " << *myStr << " " << *myFloat << endl;
	

	delete myInt;
	delete myStr;
	delete myFloat;

	
	return 0;
}
