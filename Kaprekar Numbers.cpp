//Definition of Kaprekar numbers from Wikipedia
/*
In mathematics, a Kaprekar number for a given base is a non-negative integer, 
the representation of whose square in that base can be split into two parts that add up to the original number again. 
For instance, 45 is a Kaprekar number, because 45² = 2025 and 20+25 = 45.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long p, q;
	cin >> p >> q;
	int checker = 0;

	for (p; p <= q; p++){
		int counter = 0;
		int divider = 1;
		long sq = p*p;

		long sp = p;
		while(sp >= 10){
			sp /= 10;
			counter++;
		}

		while(counter >= 0){
			divider *= 10;
			counter--;
		}
		long r = sq % divider;
		long l = sq / divider;

		if (( r + l) == p){
			checker++;
			cout << p << " ";
		}
	}
	
	if (checker == 0){
			cout << "INVALID RANGE";
	}
	return 0;
}
