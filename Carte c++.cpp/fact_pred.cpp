#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long n, d = 1, sum = 0, g = 2, i = 1, fact = 1;
    cin >> n;

    while(fact < n){
    	fact *= i;
        i++;
    }
    int fact1 = abs(fact - n);
    int fact2 = abs(fact / (i - 1)) - n;
    if (fact1 <= fact2){
    	cout << i - 1;
    }
    else{
        cout << i - 2;
    }
}