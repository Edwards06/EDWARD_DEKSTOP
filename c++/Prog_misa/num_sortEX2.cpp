#include <iostream>
using namespace std;
int main(){
    int a[25], b[25], c[25], n, i, j;
    cin >> n;
    for(i = 0; i < n; i++){
        cout << "v[" << i << "] = "; cin >> a[i];
    }

    //Copiem vectorul a in c
    for(i = 0; i < n; i++){
        c[i] = a[i];
    }

    //Determinam cate si de care elemente sunt mai mici
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if (a[i] < a[j]){
                b[j]++;}
            else {
                b[i]++;
            }
            
        }
    }

    //scrim elementel din a in ordine crescatoare.
    for(i = 0; i < n; i++){
        a[b[i]] = c[i];
        cout << "\n";
    }

    for(i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}