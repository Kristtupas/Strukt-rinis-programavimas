#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int pasirinkimas;

do {
cout << "\nPasirinkite veiksma:\n";
cout << "1. Patikrinti ar raide yra balse\n";    
cout << "2. Iseiti\n";
cout << "Pasirinkite: ";
cin >> pasirinkimas;

    if (pasirinkimas == 1) {
       char raide;
       cout << "Iveskite raide: ";
       cin >> raide;

    // Patikriname ar raide yra balse
    bool yraBalse = false;
        
     if (raide == 'a') {
        yraBalse = true;
    } else if ( raide == 'e') {
        yraBalse = true;
    } else if ( raide == 'i') {
        yraBalse = true;
    } else if ( raide == 'o') {
        yraBalse = true;
    } else if ( raide == 'u') {
        yraBalse = true;
    }

        if (yraBalse) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    
    }
    
} while (pasirinkimas != 2); 
    
  cout << "Programa baigta.\n";
  return 0;
}






#include <iostream>  

using namespace std;

int didziausiasBendrasDaliklis(int a, int b) {
    while (b != 0) {  
        int laikinai = b;  
        b = a % b;  
        a = laikinai;  
    }
    return a; 
}

int main() {
    int sk1, sk2;  

    cout << "Įveskite pirmą skaičių: ";
    cin >> sk1; 
    cout << "Įveskite antrą skaičių: ";
    cin >> sk2; 

    cout << "Didžiausias bendras daliklis: " 
         << didziausiasBendrasDaliklis(sk1, sk2) << endl;

    return 0;  
}
