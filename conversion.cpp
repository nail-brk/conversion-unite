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
