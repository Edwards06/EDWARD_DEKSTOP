#include <iostream>
using namespace std;
int main(){
    int n , m , j , i;
    cin >> n >> m;
    int arr[n][m];

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }


    for (i = 0; i < n; i++){
        int sum = 0;
        for (j = 0; j < m; j++){
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
        sum = 0;
    }
    // cout << sum;
}