#include <iostream>
#include <iomanip>
using namespace std;

//Calculate the average of the 3 numbers
float average(int n1, int n2, int n3)
{
	return (n1 + n2 + n3) / 3.0f;
}

//Main function, ask users for three numbers to find average & give result
int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3;

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}