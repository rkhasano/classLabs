#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>      
#include <ctime>
using namespace std;

struct PoemMaker
{
	string nouns[15];
	string adjectives[15];

	void LoadNouns(string filename)
	{
		ifstream input;
		input.open(filename);
		
		for(int i=0;i<15;i++)
		{
			input >> nouns[i];
		}
		input.close();
	}
	void LoadAdjectives(string filename)
	{
		ifstream input;
		input.open(filename);

		for (int i = 0; i<15; i++)
		{
			input >> adjectives[i];
		}
		input.close();
	}
	string GetRandomNoun()
	{
		int randomNumber = rand() % 15;
		return nouns[randomNumber];
	}

	string GetRandomAdjective()
	{
		int randomNumber = rand() % 15;
		return adjectives[randomNumber];
	}

	string GeneratePoem(int lines)
	{
		string poem="";
		for (int i=0; i<lines; i++)
		{
			poem =poem + GetRandomNoun() +  " are " ;
			poem = poem + GetRandomAdjective() + "\n";
			
		}
		return poem;
	}
};

int main()
{
	srand(time(NULL));

	PoemMaker poemMaker;

	poemMaker.LoadNouns("nouns.txt");
	poemMaker.LoadAdjectives("adjectives.txt");
	string poem = poemMaker.GeneratePoem(5);
	cout << poem;

	char q = 'a';
	while (q != 'q')
	{
		cout << "press q to quit \n";
		cin >> q;
	}
	return 0;
}

