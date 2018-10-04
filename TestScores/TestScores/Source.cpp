#include <iostream>
#include <array>
using namespace std;

int main()
{
	double avg=0, highscore=0, lowscore=100, score;
	double test[10];
	for (int i = 0; i < size(test); i++)
	{

		cout << "What is the test score?\n";
		cin >> test[i];

		avg = avg + test[i];

		if (test[i] <= lowscore)
		{
			lowscore = test[i];
		}
		else if (test[i] >= highscore)
		{
			highscore = test[i];
		}
		else if (test[i] > 100 || test[i] < 0)
		{
			cout << "Incorrect try again.\n";
			i--;
		}
		if (i == 9)
		{
			avg = avg / 10;
		}
	}

	cout << "The Highscore is " << highscore << ". The low score is " << lowscore << ". The average is " << avg << ".\n";

	system("pause");
	return 0;
}