#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string searchFor;
	string replaceWith;
	string buffer;
	
	cout << "Enter the word to search for: ";
	cin >> searchFor;

	cout << "Enter the word you want to replace the above word with: ";
	cin >> replaceWith;

	ifstream input("story_original.txt");
	ofstream output("story_modified.txt");
	
	while (input >> buffer)
	{
		if (buffer == searchFor)
		{
			output << replaceWith << " ";
		}
		else
		{
			output << buffer << " ";
		}
		
	}

	input.close();
	output.close();
	return 0;
}
