#include <iostream>
#include <vector>

using namespace std;

int main() {
    int nbrPersonne;
    
    
    cout<< "Entrer le nombre de personne dans la list: ";
    cin >> nbrPersonne;

    string personneList [nbrPersonne];
    for(int i = 0; i < nbrPersonne ; i++){
        cout << "Entrer le nom du joueur: ";
        cin>>personneList[i];
        
    }

    int n = sizeof(personneList) / sizeof(personneList[0]);
    cout << n;





    return 0;
}

