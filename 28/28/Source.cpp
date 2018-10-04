#include <iostream>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	
	int scores[20];
	//declare array
	for (int i =0; i<20; i++)
	{
		int rando;
		srand(time(NULL));
		rando = rand() % 10 + 1;
		rando = scores[i];
	}
	//declare variables
	int searchScore = 0;
	int total = 0;

	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;
	while (searchScore >= 0)
	{
		total = 0;
		//search for score
		for (int x = 0; x < size(scores); x++)
		{
			if (scores[x] == searchScore)
			{
				total++;
			} //end if
		}//end for

	//display total
		cout << "Number of students earning a score of "
			<< searchScore << ": "
			<< total << endl;

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}  //end while

	system("pause");
	return 0;
}	//end of main function