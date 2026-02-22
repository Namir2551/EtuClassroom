#include <list>
#include <string>
#include <iostream>
#include "Etudiant.cpp"
class GestionnaireEtudiant{
private:
    /* data */
    list <Etudiant> listeEtudiants;

public:
    

    void ajouterEtudiant(Etudiant e){
        listeEtudiants.push_back(e);
        printf("Etudiant ajoute avec succes\n");
        
    }

    void afficherEtudiants(){
        for (Etudiant e : listeEtudiants){
            printf("ID: %d, Nom: %s, Prenom: %s\n", e.getId(), e.getNom().c_str(), e.getPrenom().c_str());
        }
    }
    

};

