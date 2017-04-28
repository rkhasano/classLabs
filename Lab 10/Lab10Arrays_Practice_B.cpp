#include <iostream>
#include <string>
using namespace std;

int main()
{
	int index = 0, arraySize = 5;
	string names[5];
	names[0] = "Xia";
	names[1] = "Shang";
	names[2] = "Zhou";
	names[3] = "Qin";
	names[4] = "Han";

	while (index < arraySize)
	{
		cout << names[index] << endl;
		index++;

    }
	


	
	return 0;
}
