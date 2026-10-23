#include "Filiere.hpp"
#include "Etudiant2.hpp"



int main() {
    // Création de la filière
    Filiere* f1 = new Filiere("Informatique");
    
    // Création de l'étudiant
    Etudiant2* e1 = new Etudiant2("Alice", "123", 15, 16, 17);
    
    // Association
    f1->inscrireEtudiant(e1);
    
    // Affichage
    f1->afficherInfo();
    
    if (e1->getFiliere() != nullptr) {
        std::cout << "Étudiant " << e1->getNom() << " est dans la filière : " 
                  << e1->getFiliere()->getNomFiliere() << std::endl;
    }
    
 
    delete f1; 
    
    return 0;
}
