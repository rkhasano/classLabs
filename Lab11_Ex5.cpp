#include <iostream>
#include <string>
using namespace std;

int main()
{
	float priceHamburger=3.99, priceFries=1.5, priceSalad=2.65;
	float* ptrPrice=&priceHamburger;
	float taxAmt;
	char choice;
	/*priceHamburger = 3.99;
	priceFries = 1.5;
	priceSalad = 2.5;*/

	cout << "[h]amburger, [f]ries, [s]alad ?";
	cin >> choice;
	
	if (choice == 'h') ptrPrice = &priceHamburger;
	else if (choice == 'f') ptrPrice = &priceFries;
	else if (choice == 's') ptrPrice = &priceSalad;
	else {
		cout << "wrong entry, your order is terminated" << endl;
	     }
	taxAmt = *ptrPrice*0.0065;
	cout << "Original price: $" << *ptrPrice << endl;
	cout << "With tax price: $" << *ptrPrice+taxAmt ;

	
	return 0;
}