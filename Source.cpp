#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	float pi = 3.14;

	float r;

	cout << "Vnesi ja vrednosta na radiusot : ";
	cin >> r;

	float L = 2 * r * pi;

	float P = pow(r , 2) * pi;

	cout << "\nPerimetarot na krugot so radius " << r << " iznesuva : " << L << endl;

	cout << "\nPlohstinata na krugot so radius " << r << " iznesuva : " << P << endl;


	cin.get();	cin.get();

	return 0;
}