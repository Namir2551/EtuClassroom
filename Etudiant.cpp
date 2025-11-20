// classe etudiant 
#include <string>
#include <iostream>
using namespace std;
class Etudiant{
// attributs
private:
    int id;
    string nom;
    string prenom;

public:
    // constructeur 
    Etudiant(int id, string nom, string prenom){
        this->id = id;
        this->nom = nom;
        this->prenom = prenom;
    }

    //supprimer etudiant
    ~Etudiant(){
        cout<<"Etudiant "<< nom <<" "<< prenom <<" supprime."<<endl;
    }

    string modifierEtudiant(string nouveauNom, string nouveauPrenom){
        nom = nouveauNom;
        prenom = nouveauPrenom;
        return "Etudiant modifie avec succes.";
    }

    int getId(){
        return id;
    }

    string getNom(){
        return nom;
    }

    string getPrenom(){
        return prenom;
    }


};