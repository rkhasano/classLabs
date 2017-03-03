#include <iostream>
#include <string>
using namespace std;

float Average(float a, float b, float c)
{
	return (a + b + c) / 3;
}

void Test_Average()
{
	float a, b, c, expected_average,test_average;
	a = 3;
	b = 4;
	c = 5;

	expected_average = (a + b + c) / 3;
	test_average = Average(a, b, c);
	if (test_average == expected_average) 
	{
		cout << "AVERAGE Test for inputs: " << a << ", " << b << ", " << c << " " << "past" << endl;
	
	}

	else {
        
		cout << "AVERAGE Test for inputs: " << a << ", " << b << ", " << c << " " << "fail" << endl;

	}

	a = 4.5;
	b = 6.8;
	c = 13.9;

	expected_average = (a + b + c) / 3;
	test_average = Average(a, b, c);
	if (test_average == expected_average)
	{
		cout << "AVERAGE Test for inputs: " << a << ", " << b << ", " << c << " " << "past" << endl;

	}

	else {

		cout << "AVERAGE Test for inputs: " << a << ", " << b << ", " << c << " " << "fail" << endl;

	}


}

/*   
1. The Average function needed parenthesis, because 3+4+5/3 is not equal to (3+4+5)/3.


*/

int Max(int a, int b, int c)
{
	if((a < b) && ( c < b ))
	{
		return b;
	}
	else if ((a < c)&& (b< c))
	{
		return c;
	}
	else {
		return a;
	}
}

/*
2. The Max function didn' test every possible result.

It checks a vs b, but doesn't check a vs c.
So if the c greater than b, but b is greater than a it returned b, while it supposed to return c.

*/

void Test_Max()
{
	int a, b, c;
	int expected_max, test_max;
	
	a = 10;
	b = 7;
	c = 3;
	expected_max = 10;
	test_max = Max(a, b, c);


	if (test_max == expected_max) {

		cout << endl;
		cout << "The Max Test past for inputs: " << a << ", " << b << ", " << c << endl;

	}
	
	else {
		cout << endl;
		cout << "The Max Test failed for inputs: " << a << ", " << b << ", " << c << endl;
	}

	a = -100;
	b = 1;
	c = -21;
	expected_max = 1;
	test_max = Max(a, b, c);


	if (test_max == expected_max) {

		cout << endl;
		cout << "The Max Test past for inputs: " << a << ", " << b << ", " << c << endl;

	}

	else {
		cout << endl;
		cout << "The Max Test failed for inputs: " << a << ", " << b << ", " << c << endl;
	}

	a = 2;
	b = 5;
	c = 11;
	expected_max = 11;
	test_max = Max(a, b, c);

	if (test_max == expected_max) {
		cout << endl;
		cout << "The Max Test past for inputs: " << a << ", " << b << ", " << c << endl;

	}

	else {
		cout << endl;
		cout << "The Max Test failed for inputs: " << a << ", " << b << ", " << c << endl;
	}

}

int Factorial(int n)
{
	int fac = n;
	for (int i = n-1; i>0; i--)
	{
		fac = fac * i;
	}
	return fac;
}

void Test_Factorial()
{
	int n, expected_fac, test_fac;
	n = 5;
	expected_fac = 120;
	test_fac = Factorial(n);

	if (test_fac != expected_fac){
		cout << endl;
		cout << "FAILED Factorial test for input: " << n << endl;
		

	}

	else {
		cout << endl;
		cout << "PASSED Factorial test for input: " << n << endl;

	}

	n = 7;
	expected_fac = 5040;
	test_fac = Factorial(n);

	if (test_fac !=expected_fac){
		cout << endl;
		cout << "FAILED Factorial test for input:" << n << endl;

	}
	/*
	3. Factorial function was wrong, because i was supposed to be one number less. than number itself.
	Also i is not supposed to be 0, becasue any number times zero equals zero.
	
	*/

	else {
		cout << endl;
		cout << "PASSED Factorial test for input:" << n << endl;

	}


}

string FormatName(string first, string last)
{
	return last + "," + " " + first;
}

/*
4. FormatName function missed the space after the coma.

*/

void Test_FormatName()
{
	string  last = "Einstein";
	string first = "Albert";
	string expected_output = "Einstein, Albert";
	string test_output;

	test_output = FormatName(first, last);

	if (test_output == expected_output) {
		cout << endl;
		cout << "Past the Format Name test";
	}

	else {
		cout << endl;
		cout << "Failed the Format Name test" << endl;
		

	}
}

int main()
{
	Test_Average();
	Test_Max();
	Test_Factorial();
	Test_FormatName();

	while (true);
	return 0;
}
