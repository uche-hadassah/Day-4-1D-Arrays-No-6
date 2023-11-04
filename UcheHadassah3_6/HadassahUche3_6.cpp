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
const int MAX = 100;
int main()
{
	int Rating;
	char frequency[] = { 0 };
	int option;
	cout << "MENU" << endl;
	cout << "1: Enter a rating" << endl;
	cout << "2: Output Results and exit" << endl;
	cout << "Enter an option:";
	cin >> option;
	while(option < 1 || option > 2)//Validating the options
	{
		cout << "Invalod option! Please enter either 1 or 2:";
		cin >> option;
	}
	if (option == 1)//When option is 1
	{
		int i = 0;
		cout << "Enter a rating(0 to 20):";
		do
		{
			cin >> Rating;
			while (Rating < 0 || Rating>20)//If the rating is not within the range of 0 -20
			{
				cout << "Invalid Rating; Enter from 0 to 20:";
				cin >> Rating;
			}
			if (Rating == i)
			{
				frequency[i]++;
			}
			i++;
		} while (Rating < 0 || Rating > 20);
	}
	else
	{
		for(int j = 0;j <= 20;j++)
		{
			cout << "Rating: " << j << "\t\tFrequency: ";
			while (frequency[j] > -1)
			{
				cout << "*";
			}
		}
	}
	return 0;
}