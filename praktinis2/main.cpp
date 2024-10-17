#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Funkcija tikrina ar raide yra balse
bool yraBalse(char raide) {
    char balsiai[] = {'a','e','i','o','u' };
    for(int i=0; i<10; i++) {
        if (raide==balsiai[i]) {
            return true;
        }
    }
return false;
}

