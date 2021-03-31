//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include <string>
#include <ostream>
#include "Person.h"

class Professor: public Person {

    class Person; // Como el doctor y el paciente tienen una dependencia circular, declaramos Paciente

    class Professor {
        std::string firstname;
        std::string lastname;
        std::string documentId;
        //std::string monthlysalary;//
        std::vector<Person *> person;

    public:
        Professor();

        Professor(monthlySalary:double, commissionRate:double);

        explicit Professor//(const std::string &nombre);
                (const std::string &firstname),(const std::string &lastname), (documentId:int),(monthlySalary:double),(commissionRate:double)

        virtual ~Professor();

        void agregarPerson(Person *_person);

        friend std::ostream &operator<<(std::ostream &os, const Professor &Professor);

        const std::string &getFirstName() const;
        const std::string &getLastName() const;
        const std::string &getDocumentId() const;
        const std::string &getMonthlySalary() const;
        const std::string &getCommissionRate() const;

        void setFirstName(const std::string &firstname);
        void setLastName(const std::string &lastname);
        void setDocumentId(documentId);
        void setMonthlySalary(monthlySalary double );
        void setCommissionRate(commissionRate:double );

        const std::vector<Person *> &getPerson() const;

        void setPerson(const std::vector<Person *> &person);
    };




};


#endif //LAB02_OOP_ADMINISTRATIVE_H
