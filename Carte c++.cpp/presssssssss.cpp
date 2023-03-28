#include <iostream>
#include <cstring>
using namespace std;
int n, i, g;
struct bn{
	char n[100], la[100]; // numele
    int s; //banii
}a[50], aux;
void citire(){
    for (i = 1; i <= n; i++){
        cin >> a[i].n;
        cin >> a[i].s;
        cin >> a[i].la;
    }
}

//afisare
void afisare(){
    for (i = 1; i <= n; i++){
        cout << a[i].n << " " << a[i].s << " " << a[i].la << " " ;
    }
}
void ordsal(){
    do{ 
        g = 1;
        for (i = 1; i <= n; i++){
            if((a[i + 1].s > a[i].s) || (a[i + 1].s == a[i].s && strcmp(a[i + 1].n,a[i].n) < 0)){
                aux = a[i + 1]; 
                a[i + 1] = a[i];
                a[i] = aux;
                g = 0;
            }
        }
    }while(!g);
};

int main(){
    cin >> n;
    citire();
    ordsal();
    // afisare();
}