//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"
//#include "Patient.h"

Person::Person() {}

Person::Person((firstName:const std::string &firstname) : firstname(firstname),(lastName:const std::string &lastname) : lastname(lastname),(DocumentId: const std::string &documentId) :documentId(documentId)) {}

Person::~Person() {

}

void Person::agregarPerson(Person *_person) {
    persons.push_back(_person);
}

//std::ostream &operator<<(std::ostream &os, const Person &person) {
   // unsigned int cantidadAdministratives = person.administratives.size();
  //  if (cantidadAdministratives == 0) {
      //  os << person.getNombre() << "no tiene doctores ahora mismo."
        //return os;
    //}

   // os << person.nombre << " esta consultando los siguientes doctores: ";
   // for (unsigned int contador = 0; contador < cantidadAministratives; ++contador) {
  //      os << person.administratives[contador]->getNombre() << ', ';
  //  }

   // return os;
//}

const std::string &Person::getLastName() const {////Apellido
    return lastname;
}

void Person::setLastName(const std::string &lastname) {
    Person::lastname = lastname;
}

const std::string &Person::getFirstName() const {////Nombre
    return firstname;
}

void Person::setFirstName(const std::string &firstname) {
    Person::firstname = firstname;
}

const std::string &Person::getDocumentId() const {////ID
    return documentId;
}

void Person::setDocumentId(documentId) {
    Person::documentId = documentId;

    Virtual person::double salary(){
        return salary
    }

   const std::vector<Person *> &Person::getPersons() const {
   return Persons;
}

void Person::setPersons(const std::vector<Person *> &persons) {
    Person::persons = persons;
}