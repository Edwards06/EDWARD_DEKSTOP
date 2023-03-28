#include <iostream>

using namespace std;

int fibo(int n) {
    //Completează funcția aici
	int nr_2, nr_1, nr_0;
    	nr_0 = 1;
    	nr_1 = 1;
    	for(int i = 3; i <= n; i++)
    	{
    	    nr_2 = nr_1 + nr_0;
    	    nr_0 = nr_1;
    	    nr_1 = nr_2;
    	}
    return nr_2;   
}

int main() //Nu modifica liniile de mai jos!
{
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}