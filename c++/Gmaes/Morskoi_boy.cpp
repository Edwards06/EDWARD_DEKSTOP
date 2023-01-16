#include <iostream>
using namespace std;
int main(){
    int const n = 5;
    int map[n][n] = {0};
    int x, y;
    for (int i = 0; i < 5; i++){
        x = rand() % n;
        y = rand() % n;
        map[x][y] = 1;
    }
    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << map[j][i];
        }
        cout << "\n";
    }


    while (true){
        cout << "Introduceti cordonatele tintei: \n";
        cin >> x;
        cin >> y;
        if (map[x][y] == 1){
            cout << "Ati nimerit corabia." << "\n" ;
            map[x][y] = 0;  
            bool ship_detect = false;  
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if (map[i][j] == 1){
                        ship_detect = true;}
                }
                if (ship_detect == true){break;}
            }
    
            if (ship_detect == false){
                cout << "Ati castigat!!!\n";
                break;
            }
        }
        else{cout << "Nati nimeri" << "\n";}

    }

}