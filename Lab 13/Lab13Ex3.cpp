#include<iostream>
#include<string>
#include <cstdlib>      // to use rand()
#include <ctime>        // to use time()
using namespace std;


int main()
{
	srand(time(NULL));

	int size;
	cout << "Enter the amount of lotto balls: ";
	cin >> size;
	int* lottoNumbers;
	lottoNumbers = new int[size];

	cout << "Lotto number count: " << size << endl;
	
	for(int i = 0; i < size;i++)
	{
		lottoNumbers[i] = rand() % 101;
		cout << lottoNumbers[i] << " ";
	}

	delete lottoNumbers;
	while (true);
	return 0;
}
