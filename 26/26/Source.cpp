#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	double money;
	//declare array
	double prices[10] = { 10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, .56, 14.75, 4.78 };
	//declare variable
	double increase = 0.0;

	//update prices
	cout << "Enter increase percentage (for example, enter 15 for 15%): ";
	cin >> increase;
	for (int i = 0; i < size(prices); i++)
	{
		money = prices[i] / increase;
		prices[i] = prices[i] + money;
		
	} //end for
	

	//display contents of array
	for (int g = 0; g < size(prices); g++)
	{

		cout << prices[g] << endl;
	} //end for

	system("pause");
	return 0;
}	//end of main function