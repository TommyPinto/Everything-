#include <iostream>
using namespace std;

int main() {
cout << "\nFirst Loop:\n";
for (int i = 0; i <= 10; i++)
cout << i << " ";
cout << "\nSecond Loop:\n";
for (int i = 10; i >= 0; i--)
cout << i << " ";
cout << "\nThird Loop:\n";
for (int i = 0; i <= 10; i= i+2)
cout << i << " ";

cout << "\nFourth Loop:\n";

for (int i = 1; i <= 1024; i= i*2)
cout << i << " ";



	return 0;
}
