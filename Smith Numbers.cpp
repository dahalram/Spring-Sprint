#include <iostream>
#include <cmath>

using namespace std;

void primeFactors(int n);

int main(){
	long long int n;
	cin >> n;
	primeFactors(n);

}

void primeFactors(int n){
	int sum1 = 0, sum2 = 0;
	int n1 = n;
	int c;

	while(n1 >= 10){
		 c = n1 % 10;
		 sum1 += c;
		 n1 = n1/10;
	}
	if (n1 < 10){
		sum1 += n1;
	}

	//Prime factors	
	while (n % 2 == 0){
		sum2 += 2;
		n /= 2;
	}

	for (int i = 3; i <= sqrt(n); i = i+2){
        while (n%i == 0)
        {
        	if (i >= 10){
        		int d = i;
        		int e;
        		while(d >= 10){
        			e = d % 10;
        			sum2 += e;
        			d = d/10;
        		}
        		if(d < 10){
        			sum2 += d;
        		}
        	n /= i;  
        	}
        	else{
        		sum2 += i;
            	n /= i;   
        	}
                     
        }
    }
 
    if (n > 2){
    	int f = n;
    	int g;
    	if(n >= 10){
    		while (f >=10){
    			g = f % 10;
    			sum2 += g;
    			f = f/10;
    		}
    	}
    	sum2 += f;

    }

    if (sum1 ==sum2){
    	cout << "1";
    }
    else
    	cout << "0";
}


