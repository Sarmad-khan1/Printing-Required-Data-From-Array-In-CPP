#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	system("cls");

	int element[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter data in an array at memory location " << i + 1 << ": ";
		cin >> element[i];
	}
	int number = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Press Any key between 1 to 5 to print the element of an array: ";
		cin >> number;
		if (number >= 1 && number <= 5)
		{
			cout << "Element at position" << number << " " << element[number - 1] << endl;
		}
		if(number == 0)
		{
			break;
		}
	}
	cout<<"Press Any Key to Terminate...";
	getch();
}