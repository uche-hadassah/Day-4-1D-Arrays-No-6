/*Ratings: Some students were asked to rate the quality of food in the cafeteria on a 
scale 0 to 20 (0 for awful and 20 for excellent). Write a program which will 
summarize their responses in the following form: Assume, as an example, that out of 
the 13 students we asked, 3 students gave it a “0” rating , 5 students gave it a rating 
“1” and 5 students gave it a “4” rating. Write a program that would give the 
following output in case of the above scenario:
Rating: 0 Frequency: ***
Rating: 1 Frequency: *****
Rating: 2 Frequency: 
Rating: 3 Frequency:
Rating: 4 Frequency: *****
………
Rating: 20 Frequency:
Note that absence of stars means 0 students gave that rating. Your program should 
allow entering of ratings as integers form 0 to 20. The number of ratings to be 
entered should be defined by the user. Input ratings should be validated so that they 
do not fall outside the valid range.*/
#include<iostream>
using namespace std;
const int MAX = 21;
int main()
{
	int Rating[MAX] = { 0 };
	int Limit;
	cout << "How many students will be voting?";
	cin >> Limit;//Gets the total number of votes from the user
	
	do
	{
		int rating;
		cout << "Enter a rating:";
		cin >> rating;
		if (rating >= 0 && rating <=20)
		{
			Rating[rating]++;
		}
		else
		{
			cout << "Invalid rating!Please enter a valid rating:";
			cin >> rating;
		}

		Limit--;
	} while (Limit > 0);//Gets the ratings from the user and stores them in an array
	for (int i = 0; i < MAX; i++)
	{
		cout << "Rating: " << i << "\tFrequency: ";
		for (int j = 0; j < Rating[i]; j++)
		{
				cout << "*";
		}
		cout << endl;
    }
	return 0;
}