#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b;
	cout << "Enter a,b: ";
	cin >> a >> b;
double c = pow((a*a +b*b),.5);
cout << "The hypotenuse is: " << c << endl;

double area;
area = .5 * a * b;

cout <<"The area of this triangle is: " << area << endl;

	return 0;
}
