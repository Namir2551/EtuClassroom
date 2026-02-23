#include <list>
#include <string>
#include <iostream>
#include "Etudiant.cpp"
class GestionnaireEtudiant
{
private:
    /* data */
    list<Etudiant> listeEtudiants;

public:
    // ajoue des etudiants
    void ajouterEtudiant()
    {
        // noubre de etudiant a cree
        int creenbrEtudiant;
        printf("veilliez saisir le nombre d'etudiant a cree: ");
        cin >> creenbrEtudiant;

        for (int i = 0; i < creenbrEtudiant; i++)
        {
            cout << "veilliez saisir le nom de l'etudiant " << i + 1 << " : ";
            string nom;
            cin >> nom;
            cout << "veilliez saisir le prenom de l'etudiant " << i + 1 << " : ";
            string prenom;
            cin >> prenom;
            Etudiant e(i + 1, nom, prenom);
            listeEtudiants.push_back(e);

            printf("\n");
            
        }
        
        printf("Etudiant ajoute avec succes\n");
        
    }

    // methode pour modifier les infos de letudiant
    void modifierEtudiant()
    {
        int idEtudiant;
        string nv_Nom;
        string nv_prenom;
        int choix = 0;
        // affichage de la liste etudiants
        afficherEtudiants();
        printf("veilliez saisir l'id de l'etudiant a modifier: ");
        cin >> idEtudiant;
        for (Etudiant &e : listeEtudiants)
        {
            if (e.getId() == idEtudiant)
            {
                // affichage de letudiant selectionner à modifier:
                printf("Modification pour\n"
                       "ID: %d, Nom: %s, Prenom: %s\n",
                       e.getId(), e.getNom().c_str(), e.getPrenom().c_str());
                while (choix != 3)
                {
                    // selection du choix
                    printf("Selectionner votre choix: \n"
                           "1. modifier nom\n"
                           "2. modifier prenom\n"
                           "3. retourn menu principale\n");
                    cin >> choix;

                    if (choix == 1)
                    {
                        // nom
                        printf("Entrez le nouveau nom: \n");
                        cin >> nv_Nom;
                        e.setNom(nv_Nom);
                    }
                    else if (choix == 2)
                    {
                        // prenom
                        printf("Entrez le nouveau prenom: \n");
                        cin >> nv_prenom;
                        e.setPrenom(nv_prenom);
                    }
                    else if (choix == 3)
                    {
                        break;
                    }
                    else
                    {
                        printf("** choix invalide **\n");
                    }
                }
            }
        }
    }

    // methode pour supprimer un etudiant

    // affichage de la liste de etudiants
    void afficherEtudiants()
    {
        printf("\n========================================");
        for (Etudiant e : listeEtudiants)
        {
            printf("ID: %d, Nom: %s, Prenom: %s\n", e.getId(), e.getNom().c_str(), e.getPrenom().c_str());
        }
        printf("========================================\n");
    }
};
