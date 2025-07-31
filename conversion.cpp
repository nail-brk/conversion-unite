#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double celsiusVersKelvin(double c)      { return c + 273.15; }
double metresVersPieds(double m)        { return m * 3.28084; }
double euroVersDinar(double e)          { return e * 149.14; }
double euroVersDollar(double e)         { return e * 1.14; }
double kmhVersMs(double kmh)            { return kmh / 3.6; }


void afficherMenu() {
    cout << "===== MENU DE CONVERSION =====" << endl;
    cout << "1. Celsius -> Kelvin" << endl;
    cout << "2. Mètres -> Pieds" << endl;
    cout << "3. Euro -> Dinar algérien" << endl;
    cout << "4. Euro -> Dollar américain" << endl;
    cout << "5. km/h -> m/s" << endl;
    cout << "==============================" << endl;
    cout << "Faites votre choix : ";
}


void effectuerConversion(int choix) {
    double valeur, resultat;

    switch (choix) {
        case 1:
            cout << "Entrez la température en °C : ";
            cin >> valeur;
            resultat = celsiusVersKelvin(valeur);
            cout << "Résultat : " << resultat << " K" << endl;
            break;

        case 2:
            cout << "Entrez la distance en mètres : ";
            cin >> valeur;
            resultat = metresVersPieds(valeur);
            cout << "Résultat : " << resultat << " pieds" << endl;
            break;

        case 3:
            cout << "Entrez le montant en euros : ";
            cin >> valeur;
            resultat = euroVersDinar(valeur);
            cout << "Résultat : " << resultat << " DZD" << endl;
            break;

        case 4:
            cout << "Entrez le montant en euros : ";
            cin >> valeur;
            resultat = euroVersDollar(valeur);
            cout << "Résultat : " << resultat << " USD" << endl;
            break;

        case 5:
            cout << "Entrez la vitesse en km/h : ";
            cin >> valeur;
            resultat = kmhVersMs(valeur);
            cout << "Résultat : " << resultat << " m/s" << endl;
            break;

        default:
            cout << " Option invalide !" << endl;
    }
}

int main() {
    int choix;
    afficherMenu();
    cin >> choix;
    effectuerConversion(choix);
    return 0;
}
