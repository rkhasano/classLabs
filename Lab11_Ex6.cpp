#include <iostream>
#include <string>
using namespace std;

int main()
{
	string students[3] = { "Ashley","Jacob","Jesus" };
	string* ptrStudent;
	int j;
	cout << "Enter 0, 1, or 2 ";
	cin >> j;
	ptrStudent = &students[j];
	cout << "New name: ";
	cin >> *ptrStudent;

	for (int i = 0; i < 3; i++)
	{
		cout << "student " << i << " = " << students[i] << endl;
	}

	while (true);
	return 0;
}