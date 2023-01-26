#include <iostream>
using namespace std;
int main(){
    int nr, nq;
    int arr[100];
    int arrr[100];
    for (int i = 1; i <= 8; i++)
    {   
        if(i % 2 == 1){
            for (int j = 1; j <= 8; j+=2){
                arr[j] = arr[j];
                cout << arr[nr] << "\n";
            }
        }

    }

    for (int i = 1; i <= 8; i++)
    {   
        if(i % 2 == 0){
            for (int j = 1; j <= 8; j+=2){
                arrr[j]= arrr[nq];
                cout << arrr[nq] << "\n";
            }
        }

    }
    
}