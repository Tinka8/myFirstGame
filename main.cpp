#include <iostream>

using namespace std;

int main() {

    // uvodny text

    string welcome = R"(
        /////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////
        ///                 _                                         ///
        ///    ______ _ ___| |_ __ ___   ____ _ _ __ _ __   __ _      ///
        ///   |_  / _` / __| __/ _` \ \ / / _` | '__| '_ \ / _` |     ///
        ///    / / (_| \__ \ || (_| |\ V / (_| | |  | | | | (_| |     ///
        ///   /___\__,_|___/\__\__,_| \_/ \__,_|_|  |_| |_|\__,_|     ///
        ///                                                           ///
        /////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////
        )";

    cout << welcome << endl;
    cout << "        / Version: 0.1" << endl;
    cout << "        / Made by: @tina818";
    cout << endl;

    // premenne
    string name, age;
    int choice;


    cout << endl;
    // meno
    cout << "Jak se jmenuješ? " << endl;
    cin >> name;

    cout << endl;
    // vek
    cout << "Kolik ti je let? " << endl;
    cin >> age;
    
    cout << endl;
    // uvod
    cout << "Začínaš jako majitel zastávarny ve měste Bílina, v Ústeckém kraji." << endl;
    cout << "Jmenuješ se " << name << " a je ti " << age << " let." << endl;

    cout << endl;
    // ciel hry
    cout << "Tvým úkolem v textové hře zastavarna je, aby ti neklesla reputace s žádným NPC pod 0" << endl;
    cout << "Ve hře najdeš tato NPC: Kačka, Kačenka, Bibina, Africký šnek" << endl;

    cout << endl;
    // vyber
    cout << "Je pondělí ráno, budík zvoní v 7.30, vstáváš v 9.30 jako vždy." << endl;
    cout << "Co uděláš nejdříve? " << endl;
    cout << "1) Nakrmíš psa" << endl;
    cout << "2) Připravíš si snídani" << endl;
    cout << "3) Jdeš do koupelny" << endl;
    cout << endl;
    cout << "Vyber možnost: ";
    cin >> choice;

    // moznosti
    if (choice == 1) {
        cout << "Nakrmíš psa" << endl;
    } else if (choice == 2) {
        cout << "Připravíš si snídani";
    } else if (choice == 3) {
        cout << "Jdeš do koupelny";
    }












    return 0;
}
