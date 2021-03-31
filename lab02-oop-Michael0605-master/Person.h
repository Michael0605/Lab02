//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>
#include <vector>
#include "Administrative.h"
#include "Professor.h"


/**
 * Abstract Class of Person     ////// revisar codigo para verificar si relaciones , metodos , clases y etc. funcionarian.
 */
class Person {//paciente

    //struct//
     class Person; // Como el doctor y el paciente tienen una dependencia circular, declaramos Doctor

    class Administrative {
        std::string firstname;
        std::string lastname;
        std::string documentId;

        std::vector<Person *> personas;

        class Professor {
            std::string firstname;
            std::string lastname;
            std::string documentId;

            std::vector<Person *> personas;
    public:
        Person();

       Person((firstName:const std::string &firstname : firstname(firstName)),(lastName:const std::string &lastname) : lastname(lastname),(DocumentId:const std::string &documentId) documentid(documentId)) ;

        virtual ~person();

        ////void agregarDoctor(Doctor *_doctor);

        ////friend std::ostream &operator<<(std::ostream &os, const Paciente &paciente);

        const std::string &getLastName() const;

        const std::string &getFirstName() const;

        const std::string &getDocumentID() const;

        void setLastName(const std::string &lastname);

        void setFirstName(const std::string &firstname);

        void setDocumentId(documentId);

        const std::vector<Person *> &getPersons() const;

        void setPersons(const std::vector<Person *> &persons);
    };
};


#endif //LAB02_OOP_PERSON_H
