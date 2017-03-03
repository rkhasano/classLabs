#include <iostream>
#include <string>
using namespace std;

int main()
{
	string letters[5] = { "A", "B", "C", "D", "E" };

	for (string c : letters)
		cout << c;

	
	return 0;
}
