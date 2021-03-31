//
// Created by Maikol Guzman on 8/2/20.
//

#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

int main() {

        // Se crea un profesor fuera del alcance la Universidad
        Profesor *professor = new Professor.FirstName("Mike");
        Profesor *professor = new Professor.LastName("Guzman");
        Professor::setDocumentId=12345678;
        Professor::setMonthlySalary=800000;
                {
            // Crear un universidad y usar el constructor para pasar el parametro de profesor adentro
            University university(professor);
        } // Universidad fin del alcance


    Administrativo *administrative = new Administrative.FirstName("Marta");
    Administrative *administrative = new Administrative.LastName("Rojas");
    Administrative::setDocumentId=87654321;
    Administrative::setMonthlySalary=900000;
    {
        University university(administrative);
    } // Universidad fin del alcance
    std::cout << professor->getNombre() << " aún existe!";
    std::cout << professor->getDocumentId() << " aún existe!";
    std::cout << professor->getSalary << " aún existe!";
    std::cout << professor->getCommissionRate() << " aún existe!";

    std::cout << administrative->getNombre() << " aún existe!";
    std::cout << administrative->getDocumentId() << " aún existe!";
    std::cout << administrative->getSalary << " aún existe!";

        delete professor;
        delete administrative;

        return 0;
}