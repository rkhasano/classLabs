#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number = 10;
	float decimal = 31.44;
	string name = "Bill Simons";

	int* ptrInteger = &number;
	float* ptrFloat = &decimal;
	string* ptrString = &name;

	
	cout << ptrInteger << "=" << *ptrInteger << endl;
	cout << ptrFloat << "=" << *ptrFloat << endl;
	cout << ptrString << "=" << *ptrString << endl;

	
	return 0;
}