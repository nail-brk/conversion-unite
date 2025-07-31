cout << "Entrez une valeur positive : ";
cin >> valeur;

if (cin.fail() || valeur < 0) {
    cin.clear();  
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cout << " Erreur : valeur invalide !" << endl;
    break;
}