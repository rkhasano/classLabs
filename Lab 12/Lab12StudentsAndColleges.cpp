#include <iostream>
#include <string>

using namespace std;

struct College
{
	string name;
	string state;
};

struct Student
{
	string name;
	College* ptrSchool;
};

int main()
{
	College colleges[3];
	colleges[0].name = "JCCC";
	colleges[0].state = "KS";
	colleges[1].name = "MCCKC";
	colleges[1].state = "MO";
	colleges[2].name = "KCKCC";
	colleges[2].state = "KS";
	
	Student students[5];

	for (int i = 0; i < 5; i++)
	{
		int k;
		cout << "Enter the name for student " << i + 1 << ": ";
		cin >> students[i].name;
		
		cout << "Which college for " << students[i].name << endl;
		cout << endl;
		for (int j=0; j<3; j++)
		{
			cout << j + 1 << colleges[j].name << endl;
		}
		cin >> k;
		students[i].ptrSchool = &colleges[k - 1];
		cout << endl;
	}

	for (int i=0; i < 5; i++)
	{
		cout <<i+1 << students[i].name << "\t " << students[i].ptrSchool->name << " " << students[i].ptrSchool->state <<endl;
	}
	while (true);
	return 0;
}
