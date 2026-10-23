#pragma once
#include <string>
#include <iostream>

class Etudiant2; // déclaration anticipée

class Filiere {
private:
    std::string nomFiliere;
    Etudiant2* etudiantInscrit;

public:
    Filiere(std::string nom);
    ~Filiere(); // Destructeur : libère l'étudiant inscrit
    void inscrireEtudiant(Etudiant2* e);
    Etudiant2* getEtudiantInscrit() const;
    std::string getNomFiliere() const;
    void afficherInfo() const;
};
