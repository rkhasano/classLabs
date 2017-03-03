#include <iostream>
#include <string>
using namespace std;

int main()
{
	string items[3];
	float prices[3];
	int arraySize = 3, itemCount = 0;

	for (int i=0; i < arraySize; i++)

	{
		cout << "Enter item name: ";
		cin >> items[itemCount];

		cout << "Enter price: ";
		cin >> prices[itemCount];

		itemCount++;
		cout << endl;

	}

	

	for (int counter=0;counter < itemCount; counter++)
	{
		cout << "Item #" << counter << ": " << items[counter] << ", " << prices[counter] << endl;
		
	}


	while (1);
	return 0;
}