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
		//cout << sq << endl;

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


		//cout << l << endl;
		//cout << r;

	}
	if (checker == 0){
			cout << "INVALID RANGE";
	}
	return 0;
}
