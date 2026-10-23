#pragma once
#include <string>
#include <iostream>

class Filiere; // déclaration anticipée (évite l'inclusion circulaire)

class Etudiant2 {
private:
    std::string nom;
    std::string cin;
    double note1, note2, note3;
    Filiere* filiere; // Association 1-1

public:
    // Constructeurs
    Etudiant2();
    Etudiant2(std::string n, std::string c, double n1, double n2, double n3);

    // Getters
    std::string getNom() const;
    std::string getCin() const;
    double getNote1() const;
    double getNote2() const;
    double getNote3() const;

    // Setters
    void setNom(std::string n);
    void setCin(std::string c);
    void setNote1(double n);
    void setNote2(double n);
    void setNote3(double n);
    void setFiliere(Filiere* f); // Setter pour l'association
    Filiere* getFiliere() const; // Getter pour l'association
};
