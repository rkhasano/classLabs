#include <iostream>
#include <string>
using namespace std;

int main()
{
	char choice;
	int i = 10;
	int* ptrI = &i;
	float f = 33.33;
	float* ptrF = &f;
	bool b = true;
	bool* ptrB = &b;
	double d = 44.44;
	double* ptrD = &d;
	
	cout << "[i]nt, [f]loat, [b]oolean, or [d]ouble? ";
	cin >> choice;

	if (choice == 'i') cout << "Integer size: " << sizeof(i) <<" address: " << ptrI << endl;
	
	else if(choice == 'f') cout << "Float size: " << sizeof(f) << " address: " << ptrF << endl;
	else if(choice == 'b') cout << "Boolean size: " << sizeof(b) << " address: " << ptrB << endl;
	else if(choice == 'd')cout << "Double size: " << sizeof(d) << " address: " << ptrD << endl;
	else cout << "wrong entry";
	

	while (true);
	return 0;
}