//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor() {}

Professor::Professor(monthlySalary:double, commissionRate:double){}

Professor::Professor((firstName:const std::string &firstname) : firstname(firstName),(lastName:const std::string &lastname) : lastname(lastname),(DocumentId:double), (monthlySalary:double),(commissionRate:double))  {}


Professor::~Professor() {
}

void Professor::agregarPerson(Person *_person) {
    // Se va a agregar el personal como profesor
    Persons.push_back(_person);

    // El personal va a agregar al como profesor como sus funciones.//
    _person->agregarProfessor(this);
}

const std::string &Professore::getFirstName() const {//get nombre
    return FirstName;
}
const std::string &Professor::getLastName() const {//getapellido
    return LastName;
}
const std::string &Professor::getDocumentId() const {//get ID
    return DocumentId;
}
const std::string &Professor::getMonthlySalary() const {//get Salario
    return MonthlySalary;
}

const std::string &Professor::getCommissionRate() const {//get Comision
    return CommissionRate;
}

void Professor::setFirstName(const std::string &firstname) {//sets
    Professor::firstname = firstname;
}
void Professor::setLastName(const std::string &lastname) {
    Professor::lastname = lastname;
}
void Professor::setDocumentId(documentId) {
    Professor::documentId = documentId;
}
void Professor::setMonthlySalary(monthlysalary) {
    Professor::monthlysalary = monthlysalary;
}
void Professor::setCommissionRate(commissionrate) {
    Professor::commissionrate = commissionrate;
}
const std::vector<Person *> &Professor::getPersons() const {
    return persons;
}

void Professor::setPersons(const std::vector<Person *> &persons) {
    Professor::persons = persons;
}

//std::ostream &operator<<(std::ostream &os, const Professor &professor) {
   // os << "nombre: " << professor.nombre;
   // return os;
//}

//const std::string &Professor::getNombre() const {
   // return nombre;
}

//void Professor::setNombre(const std::string &nombre) {
  // Professor::nombre = nombre;
}

//};