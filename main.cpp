#include <iostream>
#include <vector>
#include <windows.h>
#include <string>
#include "GestionnaireEtudiant.cpp"
using namespace std;

int main()
{

    int option = 0;

    GestionnaireEtudiant gestionnaire;

    while (option != 4)
    {
        cout << "===================== Menu principale =====================" << endl;
        cout << "1. Gestion des classes" << endl;
        cout << "2. Gestion des étudiants" << endl;
        cout << "3. Lister Etudiant" << endl;
        cout << "4. Exit" << endl;
        cout << "veilliez choisir une option: ";
        cin >> option;
        cout << endl;

        switch (option)
        {

        // creation d'une classe etudiant
        case 1:
        {
            cout << "========== Creation d'une classe etudiant ==========\n"
                 << endl;
            break;
        }
        // creation etudiant
        case 2:
        {
            printf("========== Gestion des etudiants ========== \n");

            int choix;
            while (choix != 5)
            {
                printf("\nBienvenue au menu de la gestion des etudiants\n"
                       "1. Création d'étudiant\n"
                       "2. Supprimer un étudiant\n"
                       "3. Modification\n"
                       "4. Afficher la liste des étudiants\n"
                       "5. Menu principale\n"
                       "Veuillez sélectionner votre choix: ");

                cin >> choix;

                switch (choix)
                {
                case 1:{
                    gestionnaire.ajouterEtudiant();
                    break;
                }
                case 2:
                    // supprimer
                    gestionnaire.supprimerEtudiant();
                    break;
                case 3:
                    gestionnaire.modifierEtudiant();
                    break;
                case 4:
                    gestionnaire.afficherEtudiants();
                    break;
                case 5:
                {
                    break;
                }
                default:
                    printf("** Choix invalide **");
                }
            }
        }
        case 3:
        {

            break;
        }
        case 4:{
            cout << "Au revoir!" << endl;
            exit(0);
            break;
        }
        default:
            cout << endl;
            cout << "** Option invalide, veuillez reessayer **" << endl;
            Sleep(2000); // pause de 2 secondes
            break;
        }
    }

    return 0;
}
