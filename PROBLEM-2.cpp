#include <iostream>
using namespace std;

int day;
int temperatureA[7], temperatureB[7], temperatureC[7];
char provinceA [3] = "A";
char provinceB [3]= "B";
char provinceC [3] = "C";
const int Province = 1;
const int Week = 7;

int main()
{
    int temperature[Province][Week];

    cout << "Please Enter the Temperature for a week for Province A, Province B, and Province C respectively. \n";

    for (int i = 0; i < Province; ++i)
    {
        for(int j = 0; j < 7; ++j)
        {
            cout << "Province " << provinceA << ", Day " << j + 1 << " : ";
            cin >> temperatureA[j];
            
        }
                for(int j = 0; j < 7; ++j)
        {
            cout << "Province " << provinceB << ", Day " << j + 1 << " : ";
            cin >> temperatureB[j];
        }
                for(int j = 0; j < 7; ++j)
        {
            cout << "Province " << provinceC << ", Day " << j + 1 << " : ";
            cin >> temperatureC[j];
            
        }
        
    }

    cout << "\n\nDisplaying Values:\n";

    for (int i = 0; i < Province; ++i)
    {
        for(int j = 0; j < 7; ++j)
        {
            cout << "Province " << provinceA << ", Day " << j + 1 << " : " << temperatureA[j] << endl;
        }
                for(int j = 0; j < 7; ++j)
        {
            cout << "Province " << provinceB << ", Day " << j + 1 << " : " << temperatureB[j] << endl;
        }
                for(int j = 0; j < 7; ++j)
        {
            cout << "Province " << provinceC << ", Day " << j + 1 << " : " << temperatureC[j] << endl;
        }
    }

    return 0;
}
