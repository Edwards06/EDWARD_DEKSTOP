#include <iostream>
using namespace std;
int main(){
	int n , i, j;
    cin >> n;
    int arr[n][n] = {0};

    for (i = 0; i < n; i++){
    	for (j = 0; j < n; j++){
        	if ((i + j) % 2 == 0) arr[i][j] = 1;
        }   
    }

    for (i = 0; i < n; i++){
    	for (j = 0; j < n; j++){
        	cout << arr[i][j] << " ";
        }
    cout << "\n";    
    }
}