// sum the numbers from 1 to n and return the answer
#include <iostream>
using namespace std;
//Thomas Pinto
//I pledge my honor I have abided by the Stevens honor System
int sum(int n) {
	int total = 0;
for(int i=0;i<=n;i++ )
total+= i;

return total;
}

// sum the numbers from 1/1 to 1/n and return
float sumReciprocals(int n) {
float total2 = 0;
for (float i = 1; i <= n; i++)
total2+=1/i;

return total2;
}

// sum the numbers from 1/n to 1/1 (same as above but reversed) and return
float sumReciprocalsReverse(int n) {
 float total3 = 0;
 for (float i=n; i>=1; i--)
 total3+=1/i;

 return total3;
}

int main() {
	cout << sum(100) << '\n';
	cout << sumReciprocals(100) << '\n';
	cout << sumReciprocalsReverse(100) << '\n';
}
