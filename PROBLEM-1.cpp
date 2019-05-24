#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, n, number, average, smallest, largest;
    float arr[10];
	int sum = 0;
	
    for(i = 1; i <= 10; ++i)
    {
       cout << "Please Enter an integer" << " : ";
       cin >> number;
       sum = sum+number;
       average = sum/10;
       
       if(i==1)
   		smallest = number;
       	
   		if(number<smallest) 
   		smallest = number;
   		
   		else
   		largest = number;
    }


    cout << "Largest element is: " << largest << endl;
    cout << "Smallest element is: " << smallest << endl;
    cout << "The Sum is: " << sum << endl;
    cout << "The Average is: " << average << endl;
    
	_getch();
    return 0;
}
