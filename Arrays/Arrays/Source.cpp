#include <iostream>
using namespace std;

int main()
{
	int user, temp = 0;
	int nums[5];
	for (int i = 0; i <= 4; i++)
	{
		cout << "Please input a number\n";
		cin >> nums[i];
	}
	for (int n= 0; n < 5; n++)
	{
		if (nums[n] > temp)
		{
			temp = nums[n];
		}
	}
	cout << "Your largest number is " << temp;
	system("pause");
	return 0;
}