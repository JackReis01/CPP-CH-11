#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
	int count = 1;
	string frow[]{ " R ", " B "," R "," B "," R "," B "," R "," B "," R " };

	do {


		if (count % 2 == 1)
		{
			for (int i = 0; i < 8; i++)
			{
				if (i == 7)
				{
					cout << frow[i] << endl;
				}
				else
				{
					cout << frow[i];
				}
			}
			count++;
		}
		if (count % 2 == 0)
		{
			for (int i = 1; i < 9; i++)
			{
				if (i == 8)
				{
					cout << frow[i] << endl;
				}
				else
				{
					cout << frow[i];
				}
			}
			count++;
		}
	} while (count < 10);



	system("pause");
	return 0;
}