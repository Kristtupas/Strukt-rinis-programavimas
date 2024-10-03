#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Pasirinkite:"<<endl;
    cout << "1. EUR -> Kita valiuta"<<endl;
    cout << "2. Pirkti valiuta"<<endl;
    cout << "3. Parduoti valiuta"<<endl;

    int parinktis;
    cout << "Iveskite pasirinkimo numeri: ";
    cin >> parinktis;

    int valiutosTipas;
    double amount, result;

    switch (parinktis) {
        case 1: // EUR -> Kita valiuta
            cout << "Pasirinkite valiuta:"<<endl;
            cout<<"1. GBP"<<endl;
            cout<<"2. USD"<<endl;
            cout<<"3. INR"<<endl;
            cin >> valiutosTipas;
            cout << "Iveskite suma (EUR): ";
            cin >> amount;

            if (valiutosTipas == 1)
                result = amount * 0.8593; // GBP
            else if (valiutosTipas == 2)
                result = amount * 1.0713; // USD
            else if (valiutosTipas == 3)
                result = amount * 88.8260; // INR

            cout << fixed << setprecision(2) << amount << " EUR -> " << result << endl;
            break;
        case 2: // Pirkti valiutą
            cout << "Pasirinkite valiuta:"<<endl;
            cout<<"1. GBP"<<endl;
            cout<<"2. USD"<<endl;
            cout<<"3. INR"<<endl;
            cin >> valiutosTipas;
            cout << "Iveskite suma: ";
            cin >> amount;

            if (valiutosTipas == 1)
                result = amount * 0.8450; // GBP
            else if (valiutosTipas == 2)
                result = amount * 1.0547; // USD
            else if (valiutosTipas == 3)
                result = amount * 85.2614; // INR

            cout << fixed << setprecision(2) << "Nusipirkote: " << amount << " už " << result << " EUR" << endl;
            break;

        case 3: // Parduoti valiutą
            cout << "Pasirinkite valiuta:"<<endl;
            cout<<"1. GBP"<<endl;
            cout<<"2. USD"<<endl;
            cout<<"3. INR"<<endl;
            cin >> valiutosTipas;
            cout << "Iveskite suma: ";
            cin >> amount;

            if (valiutosTipas == 1)
                result = amount / 0.9060; // GBP
            else if (valiutosTipas == 2)
                result = amount / 1.1309; // USD
            else if (valiutosTipas == 3)
                result = amount / 92.8334; // INR

            cout << fixed << setprecision(2) << "Pardavete: " << amount << " uz " << result << " EUR" << endl;
            break;

        default:
            cout << "Neteisingas pasirinkimas." << endl;
            break;
    }

    return 0;
}








