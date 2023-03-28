#include <iostream>
using namespace std;
int main() {
 int n1, n2, *ip1, *ip2; // Declaram variabilele
 // Citim datele de intrare
 cout<<"Introduceti valoarea 1: "; cin>>n1;
 cout<<"introduceti valoarea 2: "; cin>>n2;
//  ip1 = &n1;
//  ip2 = &n2;
 //Afisam valorile datelor inainte de interschimbare
 cout<<"Variabila 1 = "<<n1<<" & Variabila 2 = "<<n2<<"\n";
 // Secventa de cod pentru interschimbarea valorilor pointerilor
 int temp,*val1=&n1,*val2=&n2;
 temp = *val1; *val1 = *val2; *val2 = temp;
 //Afisam valorile datelor dupa interschimbare
 cout<<"Variabila 1 = "<<*val1<<" & Variabila 2 = "<<*val2<<"\n";
 cout<<"n1= " << &n1 << "\tn2= " << &n2;
}
