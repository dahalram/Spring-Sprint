#include <iostream>
#include <map>

using namespace std;

int main(){
	string myMap[500];
	//map<int, string> myMap;
	myMap[1] = "one";myMap[13] = "thirteen";
	myMap[2] = "two";myMap[14] = "fourteen";
	myMap[3] = "three";myMap[15] = "quarter";
	myMap[4] = "four";myMap[16] = "sixteen";
	myMap[5] = "five";myMap[17] = "seventeen";
	myMap[6] = "six";myMap[18] = "eighteen";
	myMap[7] = "seven";myMap[19] = "nineteen";
	myMap[8] = "eight";myMap[20] = "twenty";
	myMap[9] = "nine";myMap[21] = "twenty one";
	myMap[10] = "ten";myMap[22] = "twenty two";
	myMap[11] = "eleven";myMap[23] = "twenty three";
	myMap[12] = "twelve";myMap[24] = "twenty four";

	myMap[25] = "twenty five";myMap[26] = "twenty six";
	myMap[27] = "twenty seven";myMap[28] = "twenty eight";
	myMap[29] = "twenty nine";myMap[30] = "half";
 	 
 	int h, m;
	cin >> h >> m;

	if (m == 0){
		cout << myMap[h] << " o' clock"; 
	}
	else if(m == 1){
		cout << "one minute past " << myMap[h];
	}
	else if(m == 15){
		cout << myMap[m] << " past " << myMap[h];
	}
	else if(m > 1 && m < 30){
		cout << myMap[m] <<" minutes past "<<myMap[h];
	}
	else if(m == 30){
		cout << myMap[m] <<" past "<< myMap[h];
	}
	else if(m == 45){
		cout <<myMap[60-m] << " to " << myMap[(h+1)%12];
	}
	else if(m > 30 && m < 60){
		cout << myMap[60 - m]<<" minutes to " << myMap[(h+1)%12];
	}


	return 0;

}
