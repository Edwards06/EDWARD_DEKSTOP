#include <iostream>
using namespace std;
int main(){
    int n , m , j , i, sum = 0;
    cin >> n >> m;
    int arr[n][m];

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }


    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
           sum = sum + arr[i][j];
        }
        cout << sum << "\n";
        sum = 0;
    }
    // cout << sum;
}