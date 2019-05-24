#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	
	int words, num, integer, value, sizeA, numA, result, size;
	int numbers[100];
	char text [101];
	
	
	cout << " Please enter the Array Size:";
	cin >> size;
	cout << "Please enter Integers:";
	
	for (integer = 0; integer < size ; integer++)
{
	cin >> numbers[integer];
}
	
	
	for (integer = 0 ; integer < size; integer ++)
	{
		for(num = integer + 1; num < size ; num ++)
		{
			if(numbers[integer] > numbers[num])
			{
				value = numbers [integer];
				numbers [integer] = numbers[num];
				numbers[num] = value;
			}
		}
	}
	
	
	cout << "Please enter the Character Size";
	cin >> sizeA;
	cout <<"Please encode Characters:";
	
	for (words = 0; words < sizeA; words++)
	{
		cin >> text[words];
	}
	
	for (words = 0; words < sizeA; words++)
	{
		for(numA = words + 1; numA < sizeA; numA++)
		{
			if (text[words] > text[numA])
			{
				result = text [words];
				text [words] = text[numA];
				text[numA] = result;	
			}
		}
	}	
	
	
	cout << " The Resulting Arrangement of integers after the sorting is: \n";
	for(integer = 0; integer < size; integer++)
	{
		cout << numbers [integer] << ' ';
	}
	
	cout <<"\nThe Resulting Arrangement of Characters after the sorting is: \n";
	for (words = 0; words < sizeA; words++)
	{
		cout << text[words] << ' ';
	}
	
	
	
	
	_getch();
	return 0;
}
