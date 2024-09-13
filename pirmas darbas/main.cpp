#include <iostream>
using namespace std;
int main() {
    string vardas ="Kristupas";
    string pavarde ="Girnius";
    int amzius= 18;
    string grupe ="PI24";
    int kursas = 1;
    string studijuProgramosPavadinimas = "Programu sistemos";
    cout << "Studento vardas: " <<vardas << endl;
    cout << "Pavarde: " << pavarde << endl;
    cout << "Amzius: " << amzius << endl;
    cout << "Grupe: " << grupe << endl;
    cout << "Kursas: " << kursas << endl;
    cout << "Studiju,Programos,Pavadinimas: " << studijuProgramosPavadinimas << endl;

    //Informacija apie krepsinio kluba
    cout << "Antra uzduotis" << endl;
    string pavadinimas ="Kauno Zalgiris";
    int ikurimoMetai = 1944;
    string savininkas ="Paulius Motiejunas";
    string arena ="Kauno Zalgirio arena";
    int vietuSkaicius = 15000;
    //Ivesta informacija apie krepsinio kluba
    cout << "pavadinimas: " <<pavadinimas << endl;
    cout << "ikurimoMetai: " <<ikurimoMetai << endl;
    cout << "savininkas: " <<savininkas << endl;
    cout << "arena: " <<arena << endl;
    cout << "vietuSkaiciuss: " <<vietuSkaicius << endl;

    //Informacija apie automobili
    cout << "Trecia uzduotis" << endl;
    string marke ="BMW";
    string modelis ="M3";
    int pagaminimoMetai= 2007;
    string litrazas ="4.0l";
    string spalva ="juoda";
    //Ivesta informacija apie automobili
    cout << "marke: " << marke << ", Modelis:" << modelis << ", pagaminimo metai:" << pagaminimoMetai << ",litrazas " << litrazas << ", spalva: " << spalva << endl;

    cout << "Ketvirta uzduotis" << endl;
    int a = 13;
    int b = 5;
    double c = 17.5;

    cout << a + b-c << endl;
    cout << 15.0 / 2 + c << endl;
    cout << a / static_cast<double>(b) + 2 * c << endl;
    cout << 14 % 3 + 6.3 + static_cast<float>(b)/static_cast<float>(a)  << endl;
    cout << static_cast<int>(c) % 5 + a-b << endl;
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;

}