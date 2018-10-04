#include <iostream>
#include <array>
using namespace std;



int main()
{
	int c = 0, d=0;
	int nums[12];
	int accend[12];
	int decend[12];
	for (int i = 0; i < 12; i++)
	{
		cout << "Please enter a number\n";
		cin >> nums[i];

	}
	do
	{
		for (int n = 1; n < size(nums); n++)
		{
			if (nums[c] < nums[n])
			{
				n = 0;
				c++;
			}
			if (n == size(nums)-1)
			{
				//cout << "This is the largest number in the array: " << nums[c] << endl;
				nums[c] = accend[d];
				nums[c] = 0;

				d++;
				n = 0;
				c = 0;
			}


		}

	} while (d != 11);
	system("pause");
	return 0;
}