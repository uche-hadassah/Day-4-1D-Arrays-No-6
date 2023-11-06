/*Name:Uche Hadassah
Ratings: This program lets a number of students rate the food in a cafeteria from 0 to 20 and displays the frequency*/
#include<iostream>
using namespace std;
const int MAX = 21;
int main()
{
	int Rating[MAX] = { 0 };//Initialize all the elements inthe array to 0
	int Limit;
	cout << "How many students will be voting?";
	cin >> Limit;//Gets the total number of votes from the user
	
	do
	{
		int rating;
		cout << "Enter a rating:";
		cin >> rating;
		if (rating >= 0 && rating <=20)//Gets the rating 
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
		for (int j = 0; j < Rating[i]; j++)//Outputs the frequency with stars
		{
				cout << "*";
		}
		cout << endl;
    }
	return 0;
}