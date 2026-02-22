#include <iostream>
#include <vector>
#include <windows.h>
#include <string>
#include "GestionnaireEtudiant.cpp"
using namespace std;

 

int main() {
     
    int option = 0;
    
    GestionnaireEtudiant gestionnaire;

    while (option != 4){ 
        cout << "===================== Menu principale =====================" << endl;
        cout << "1. Creation d'une classe etudiant" << endl;
        cout << "2. Creation Etudiant" << endl;
        cout << "3. Lister Etudiant" << endl;
        cout << "4. Exit" << endl;
        cout << "veilliez choisir une option: ";
        cin >> option;
        cout << endl;
       
        switch (option){

            // creation d'une classe etudiant
            case 1:{
                cout << "========== Creation d'une classe etudiant ==========\n" << endl;
                break;
            }
            // creation etudiant
            case 2:{
                printf("========== Creation Etudiant ========== \n");
                // noubre de etudiant a cree 
                int creenbrEtudiant; 
                printf("veilliez saisir le nombre d'etudiant a cree: ");
                cin >> creenbrEtudiant;
                for(int i=0; i<creenbrEtudiant; i++){
                    cout << "veilliez saisir le nom de l'etudiant " << i+1 << " : ";
                    string nom;
                    cin >> nom;
                    cout << "veilliez saisir le prenom de l'etudiant " << i+1 << " : ";
                    string prenom;
                    cin >> prenom;
                    Etudiant e(i+1, nom, prenom);
                    gestionnaire.ajouterEtudiant(e);

                    printf("\n");
                }
                break;
            }
            case 3:
                printf("========== Lister Etudiant ========== \n");
                // afficher la liste des etudiants
                gestionnaire.afficherEtudiants();

                break;
            case 4:
                cout << "Au revoir!" << endl;
                exit(0);
                break;

            default:
                cout << endl;
                cout << "** Option invalide, veuillez reessayer **" << endl;
                Sleep(2000); // pause de 2 secondes
                break;

        }
    }         

    

    return 0;
}


