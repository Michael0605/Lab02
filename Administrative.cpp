//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative() {}

Administrative::Administrative(monthlySalary:double) {}

Administrative::Administrative((firstName:const std::string &firstname) : firstname(firstName),(lastName:const std::string &lastname) : lastname(lastname),(DocumentId:int)  {}


Administrative::~Administrative() {

}

void Administrative::agregarPerson(Person *_person) {
    // Se va a agregar el personal al area administrativa
    Persons.push_back(_person);

    // El personal va a agregar al area administrativa como sus funciones.//
    _person->agregarAdministrative(this);
}



const std::string &Administrative::getFirstName() const {//nombre
    return FirstName;
}
const std::string &Administrative::getLastName() const {//apellido
    return LastName;
}
const std::string &Administrative::getDocumentId() const {//ID
    return DocumentId;
}
const std::string &Administrative::getMonthlySalary() const {//Salario
    return MonthlySalary;
}
void Administrative::setFirstName(const std::string &firstname) {
    Administrative::firstname = firstname;
}
void Administrative::setLastName(const std::string &lastname) {
    Administrative::lastname = lastname;
}
void Administrative::setDocumentId(const std::string &documentId) {
    Administrative::documentId = documentId;
}
void Administrative::setMonthlySalary(monthlysalarys) {
    Administrative::monthlysalary = monthlysalarys;
}
const std::vector<Person *> &Administrative::getPersons() const {
    return persons;
}

void Administrative::setPersons(const std::vector<Person *> &persons) {
    Administrative::persons = persons;
}


