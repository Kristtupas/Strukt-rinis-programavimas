#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void getStudentInfo() {
    string name = "Kristupas" ;
    string surname ="Girnius" ;
    string reason = "megstu kompiuterius";
    cout << "Student " <<name<<" "<< surname << "pasirinkimas "<<reason<<endl;
}


void getSchoolInfo() {

    string schoolname = "Vilniaus Kolegija" ;
    string faculty = "Elektronikos ir informatikos fakultetas" ;
    cout << "school: " << schoolname <<" "<<"Faculty: "<<faculty<<endl;

}


int atsitiktinisSkaicius() {
    return rand() % 100;
}

int main() {
    getStudentInfo();
    getSchoolInfo();
    srand(static_cast<unsigned int>(time(0)));

    for(int i =0; i < 10;++i) {
        cout<< "Atsitiktinis skaicius:" <<atsitiktinisSkaicius() << endl;
    }
    return 0;
}
int suma(int a, int b) {
    return a+b;
}

int skirtumas(int a, int b) {
    return a-b;
}

int sandauga(int a, int b) {
    return a * b;
}

double dalmuo(int a, int b) {
    if(b !=0) {
        return static_cast<double>(a)/b;
    } else {
        cout << "Negalima dalinti i6 nulio!"<< endl;
        return 0;
    }
}
int main(){
    int a,b;
    cout << "24:";
    cin>> a;
    cout<< "82:";
    cin>> b;

    cout << "Suma: " <<suma(a,b) << endl;
    cout << "Skirtumas: " <<skirtumas(a,b)<<endl;
    cout << "Sandauga:" <<sandauga(a,b)<<endl;
    cout << "Dalmuo:" <<dalmuo(a,b)<<endl;

    cout <<"Lyginame du skaicius:"<<endl;

}







