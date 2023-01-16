#include <iostream>
using namespace std;
int main(){
    int nmax = 1000;
    int arr[100], n;
    int arrm[nmax];
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cout << "Indexul " << i << " = "; cin >> arr[i];
    }

    for (int i = 0; i < n; i++){arr[arrm[i]]++;}
    int k = 0;
    for (int i = 0; i < 100; i++){
        while(arr[i] != 0){
            arrm[k] = i;
            k++;
            arr[i]--; 
        }
    }

    for (int i = 0; i < 0; i++){
        cout << arr[i] << " ";
    }

}