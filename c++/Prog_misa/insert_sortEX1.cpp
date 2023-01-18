#include <iostream>
using namespace std;
int main(){
    int arr[10] = {5,9,5,3,4,9,7,8,12,1};
    int i, x, j;

    //INTRODUCEREA
    for(i = 0; i < 10; i++){
        cout << "v[" << i << "] = " << arr[i] << "\n";
    }

    //LOGICA
    for(i = 2; i < 10; i++){
        if(arr[i] < arr[i-1]){
            x = arr[i];
            j = i - 1;
            while(j >= 0 && arr[j] > x){
                arr[j + 1] = arr[j];
                j--;

            }
        arr[j + 1] = x;
        }
    }

    //AFISAREA
    cout << "\n";
    for(i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}