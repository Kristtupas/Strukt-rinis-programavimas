#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    const int eilutes = 5;
    const int stulpeliai =3;
    int masyvas [eilutes][stulpeliai];
    //Ivedimas 5x3 dydzio masyvo
    cout << "Iveskite 5 eiluciu ir 3 stulpeliu masyvo elementus \n";
    for (int i = 0; i < eilutes; i++) {
        for (int j=0; j < stulpeliai; j++) {
            cout << "Masyvo["<< i + 1 << "][" << j + 1 << "] elementas \n";
            cin >> masyvas[i][j];
        }
    }
    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < stulpeliai; j++) {
            cout <<setw(5) << masyvas[i][j]<<" ";
        }
        cout << endl;
    }
}



