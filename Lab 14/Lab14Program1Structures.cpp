#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Option
{
	string title;
	int count;
};

struct Poll
{
	string question;
	Option options[4];
};

int main()
{
	Poll myPoll;

	myPoll.question = "What is the best food?";

	myPoll.options[0].title = "Pizza";
	myPoll.options[0].count = 0;

	myPoll.options[1].title = "Veggie Taco";
	myPoll.options[1].count = 0;

	myPoll.options[2].title = "Samosas";
	myPoll.options[2].count = 0;

	myPoll.options[3].title = "Sushi";
	myPoll.options[3].count = 0;

	int i=0;

	while (i!=4)
	{
		cout << "What is the best food? \n0. Pizza \n1 Veggie Taco \n2 Samoas \n3 Sushi \n4Exit";
		cout << endl << "What is your selection?";
		cin >> i;
		if (i > 4) 
		{
			cout << "Invalid input";
			continue;
		}
		myPoll.options[i].count++;
	}

	ofstream output;
	output.open("results.txt");
	output << "QUESTION" << endl;
	output << "What is the best food?" << endl;
	output << endl;
	output << "Results" << endl;
	
	for (int i = 0; i < 4; i++)
	{
		
		
		output << myPoll.options[i].title << "  " << myPoll.options[i].count << endl;
	}
	
	output.close();

	return 0;
}