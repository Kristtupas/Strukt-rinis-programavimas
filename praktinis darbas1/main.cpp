#include <iostream>
#include <iomanip>
using namespace std;

// Valiutų kursai
const double rates[3][3] = {
    {0.8322, 1.20, 1.18},  // GBP: konvertavimas, pirkimas, pardavimas
    {1.11, 0.91, 0.88},    // USD
    {93.1510, 0.01, 0.01}  // INR
};

// Funkcija valiutų konvertavimui
double convertCurrency(int currency_type, double amount, bool toEUR) {
    return toEUR ? amount / rates[currency_type - 1][0] : amount * rates[currency_type - 1][0];
}

// Funkcija valiutos pirkimui
double buyCurrency(int currency_type, double amount) {
    return amount * rates[currency_type - 1][1];
}

// Funkcija valiutos pardavimui
double sellCurrency(int currency_type, double amount) {
    return amount * rates[currency_type - 1][2];
}

// Funkcija valiutos pavadinimui gauti
string getCurrencyName(int currency_type) {
    return currency_type == 1 ? "GBP" : currency_type == 2 ? "USD" : "INR";
}

int main() {
    cout << "1. Valiutos kurso palyginimas\n2. Galimybė įsigyti valiutos\n3. Galimybė parduoti valiutą\n";

    int menu_option;
    cout << "Pasirinkite opciją: ";
    cin >> menu_option;

    int currency_type;
    double currency_value, result;

    if (menu_option == 1) {
        cout << "Pasirinkite keitimo tipą:\n1. EUR -> Kita valiuta\n2. Kita valiuta -> EUR\n";
        int change_option;
        cin >> change_option;

        cout << "Pasirinkite valiutą:\n1. GBP\n2. USD\n3. INR\n";
        cin >> currency_type;

        cout << "Įrašykite sumą (" << (change_option == 1 ? "EUR" : getCurrencyName(currency_type)) << "): ";
        cin >> currency_value;

        result = convertCurrency(currency_type, currency_value, change_option == 2);
        cout << fixed << setprecision(2) << currency_value << (change_option == 1 ? " EUR -> " : " ")



















