/* Copyright © 2016, Xerxes Langerudi. All rights reserved */

#include <iostream>
#include <string>

using namespace std;

class Show
{
public:
	void Menu();
	void Item(int);
	void PrintArray(short, const string[]);
};

void Show::PrintArray(short size, const string items[])
{
	const string preElement = "\t";
	const string postElement = "\n";

	string all;

	short i;

	for (i = 0; i < size; i++)
	{
		all += items[i] + "\n";
	}

	cout << all;
}

void Show::Menu()
{
	const string menu[] = {"1. University", "2. Profitable Company", "3. Median Income", "4. Crime Rate", "5. Exit", "Please type the number of one of the options:"};

	PrintArray(6, menu);
}

void Show::Item(int optionNumber)
{
	if (optionNumber < 5)
	{
		const string states[] = {"Alabama", "Alaska", "Arizona", "Arkansas", "California", "Colorado", "Connecticut", "Delaware", "District of Columbia", "Florida", "Georgia", "Hawaii", "Idaho", "Illinois", "Indiana", "Iowa", "Kansas", "Kentucky", "Louisiana", "Maine", "Maryland", "Massachusetts", "Michigan", "Minnesota", "Mississippi", "Missouri", "Montana", "Nebraska", "Nevada", "New Hampshire", "New Jersey", "New Mexico", "New York", "North Carolina", "North Dakota", "Ohio", "Oklahoma", "Oregon", "Pennsylvania", "Rhode Island", "South Carolina", "South Dakota", "Tennessee", "Texas", "Utah", "Vermont", "Virginia", "Washington", "West Virginia", "Wisconsin", "Wyoming"};

		const short ranking[][52] = {{39, 4, 21, 30, 13, 6, 38, 32, 20, 33, 22, 47, 10, 49, 43, 23, 25, 14, 35, 29, 42, 5, 46, 9, 7, 11, 15, 44, 37, 1, 18, 16, 17, 36, 31, 26, 3, 0, 40, 24}, {2, 4, 47}, {51, 20, 30, 6, 1, 11, 21, 29, 46, 8, 4, 7, 47, 23, 5, 44, 32, 39, 13, 28, 50, 45, 49, 38, 2, 37, 43, 15, 34, 16, 10, 27, 19, 14, 35, 22, 25, 41, 12, 9, 40, 33, 31, 18, 26, 42, 36, 0, 17, 3, 48, 24}, {50, 29, 45, 15, 44, 12, 23, 21, 19, 11, 50, 37, 26, 27, 16, 49, 47, 41, 5, 39, 32, 46, 48, 34, 6, 1, 35, 30, 43, 17, 28, 14, 33, 4, 9, 38, 2, 31, 36, 13, 10, 3, 42, 7, 20, 25, 40, 22, 0, 24, 18}};

		string heading[4] = {"University", "Profitable Company", "Median Income", "Crime Rate"};

		cout << heading[optionNumber - 1] << endl << endl;

		const short total = ranking[optionNumber - 1][0] + 1;

		short i;

		for (i = 1; i < total; i++)
		{
			cout << states[ranking[optionNumber - 1][i]] << endl;
		}
	}

	cout << endl;
}

int main(int argc, char * argv[])
{
	cout << "stateRank" << endl << endl;

	int i = 0;

	Show *myShow = new Show();

	while (i != 5)
	{
		myShow->Menu();

		cin >> i;

		cout << endl;

		myShow->Item(i);
	}

	return 0;
}

