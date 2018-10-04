#include <iostream>
#include <array>
using namespace std;


int main()
{
	int count = 0, total = 0, avg = 0;
	int nums[10];
	auto itter = size(nums);
	for (int i = 0; i < size(nums); i++)
	{
		cout << "Please input a number\n";
		cin >> nums[i];

	}
	

	do 
	{
		total = total + nums[count];
		count++;
	
	} while (count < itter);
	avg = total / itter;
	cout << "The total is " << total << " and the average is " << avg << ".\n";



	system("pause");
	return 0;
}