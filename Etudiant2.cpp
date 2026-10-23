#include "Etudiant2.hpp"
#include <iostream>

Etudiant2::Etudiant2() : nom("Inconnu"), cin("000000000000000"), note1(0), note2(0), note3(0), filiere(nullptr) {}

Etudiant2::Etudiant2(std::string n, std::string c, double n1, double n2, double n3)
    : nom(n), cin(c), note1(n1), note2(n2), note3(n3), filiere(nullptr) {}

std::string Etudiant2::getNom() const { return nom; }
std::string Etudiant2::getCin() const { return cin; }
double Etudiant2::getNote1() const { return note1; }
double Etudiant2::getNote2() const { return note2; }
double Etudiant2::getNote3() const { return note3; }

void Etudiant2::setNom(std::string n) { nom = n; }
void Etudiant2::setCin(std::string c) { cin = c; }

void Etudiant2::setNote1(double n) {
    if (n >= 0 && n <= 20) note1 = n;
    else std::cerr << "Note invalide : " << n << std::endl;
}
void Etudiant2::setNote2(double n) {
    if (n >= 0 && n <= 20) note2 = n;
    else std::cerr << "Note invalide : " << n << std::endl;
}
void Etudiant2::setNote3(double n) {
    if (n >= 0 && n <= 20) note3 = n;
    else std::cerr << "Note invalide : " << n << std::endl;
}

void Etudiant2::setFiliere(Filiere* f) { filiere = f; }
Filiere* Etudiant2::getFiliere() const { return filiere; }
