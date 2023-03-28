#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

void adaugaRestaurant() {
    ofstream fout("Restaurante.txt", ios::app); 
    if (!fout) {
        cout << "Eroare la deschiderea fisierului!";
        return;
    }
    int n, i = 0;
    cout << "Introduceti numarul de restaurante: "; cin >> n;
    string codRest, responsabil, denumire;
    int reducere, locDisponibil;
    while(i < n){
        cout << "\nIntroduceti codul restaurantului: ";
        cin >> codRest;
    
        cout << "Introduceti numele responsabilului: ";
        cin >> responsabil;
    
        cout << "Introduceti denumirea restaurantului: ";
        cin >> denumire;
    
        cout << "Introduceti reducerea (%): ";
        cin >> reducere;
    
        cout << "Introduceti numarul de locuri disponibile: ";
        cin >> locDisponibil;
    

        fout << "Codul restaurantului: " << codRest << "\n" << "Numele responsabilului: " << responsabil << "\n" << "Denumirea restaurantului: " << denumire << "\n" << "Reducerea (%): " << reducere << "\n" << "Numarul de locuri disponibile: " << "\n" << locDisponibil << endl;
    
        cout << "Restaurantul a fost adaugat cu succes in baza de date!\n";
        i++;
        }
    fout.close(); 
}

void adaugaClient() {
    ofstream fout("Client.txt", ios::app); 
    if (!fout) {
        cout << "Eroare la deschiderea fisierului!";
        return;
    }
    int n, i = 0;
    cout << "Introduceti numarul de clienti: "; cin >> n;
    string codRest, nume, prenume;
    long long Avans,  Achitat, IDNP;
    while(i < n){
        cout << "\nIntroduceti codul clientului: ";
        cin >> codRest;
    
        cout << "Introduceti IDNP-ul clientului: ";
        cin >> IDNP;
    
        cout << "Introduceti numele clientului: ";
        cin >> nume;

        cout << "Introduceti prenumele clientului: ";
        cin >> prenume;
    
        cout << "Introduceti avansul: ";
        cin >> Avans;
    
        cout << "Introduceti suma achiatata: ";
        cin >> Achitat;
    
    // scriem informatiile despre noul restaurant in fisier
    fout << "codul clientului: " << codRest << "\n" << "IDNP: " << IDNP << "\n" << "Numele cliuentului: " << nume << "\n" << "prenumele clientului: " << prenume << "\n" << "Aavansul: " << "\n" << Avans << "\n" << "Suma achiatata: " << Achitat << endl;
    
    cout << "Clientu-l a fost adaugat cu succes in baza de date!";
    i++;
    }
    fout.close(); // inchidem fisierul

}



int main() {
    adaugaRestaurant();
    adaugaClient();
    return 0;
}




