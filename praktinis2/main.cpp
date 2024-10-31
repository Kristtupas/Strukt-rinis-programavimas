using namespace std;

bool yraBalse(char raide) {
    char balses[] = {'a', 'e', 'i', 'o', 'u',};
    for (char b : balses) {
        if (raide == b) {
            return true;
        }
    }
    return false;
}

int gbd(int sk1, int sk2) {
    while (sk2 != 0) {
        int laikinis = sk2;
        sk2 = sk1 % sk2;
        sk1 = laikinis;
    }
    return sk1;
}

void zaidimas() {
    int atsitiktinisSk;
    int vartotojoSk;
    srand(static_cast<unsigned int>(time(0)));
    atsitiktinisSk = rand() % 100 + 1;

    cout << "Atspek skaiciu nuo 1 iki 100:" << endl;
    do {
        cout << "Iveskite skaiciu: ";
        cin >> vartotojoSk;

        if (vartotojoSk > atsitiktinisSk) {
            cout << "Per didelis! Bandykite dar karta." << endl;
        } else if (vartotojoSk < atsitiktinisSk) {
            cout << "Per mazas! Bandykite dar karta." << endl;
        } else {
            cout << "Teisingai" << endl;
        }
    } while (vartotojoSk != atsitiktinisSk);
}

void fizzbuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else if (i % 7 == 0) {
            cout << "Boom" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int main() {
    int pasirinkimas;
    do {
        cout << "Pasirinkite funkcija:" << endl;
        cout << "1. Patikrinti ar raide yra balse" << endl;
        cout << "2. Rasti didziausia bendra dalikli" << endl;
        cout << "3. Mini zaidimas" << endl;
        cout << "4. FizzBuzz" << endl;
        cout << "0. Iseiti" << endl;
        cout << "Pasirinkimas: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1: {
                char raide;
                cout << "Iveskite raide: ";
                cin >> raide;
                cout << (yraBalse(raide) ? "True." : "False.");
                break;
            }
            case 2: {
                int sk1, sk2;
                cout << "Iveskite pirma skaiciu: ";
                cin >> sk1;
                cout << "Iveskite antra skaiciu: ";
                cin >> sk2;
                cout << "Didziausias bendras daliklis: " << gbd(sk1, sk2) << endl;
                break;
            }
            case 3: {
                zaidimas();
                break;
            }
            case 4: {
                int n;
                cout << "Iveskite teigiama sveikaji skaiciu n: ";
                cin >> n;
                fizzbuzz(n);
                break;
            }
            case 0:
                cout << "Programa baigta." << endl;
                break;
            default:
                cout << "Neteisingas pasirinkimas. Bandykite dar karta." << endl;
        }
    } while (pasirinkimas != 0);

    return 0;
}









