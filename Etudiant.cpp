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