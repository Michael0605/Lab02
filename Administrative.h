//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"
#include <vector>
#include <ostream>

class Administrative: public Person {

    class Person;
    class Administrative {
        std::string firstname;
        std::string lastname;
        std::string documentId;

        std::vector<Person *> person;

    public:
        Administrative();

        Administrative(monthlySalary:(monthlysalary);

        explicit Administrative//(const std::string &nombre);
                (const std::string &firstname),(const std::string &lastname), (const std::string &documentId),(const std::string &monthlysalary)

        virtual ~Administrative();

        void agregarPerson(Person *_person);

        friend std::ostream &operator<<(std::ostream &os, const Administrative &administrative);

        const std::string &getFirstName() const;
        const std::string &getLastName() const;
        const std::string &getDocumentId() const;
        const std::string &getMonthlySalary() const;

        void setFirstName(const std::string &firstname);
        void setLastName(const std::string &lastname);
        void setDocumentId(documentId);
        void setMonthlySalary(monthlysalary);

        const std::vector<Person *> &getPerson() const;

        void setPerson(const std::vector<Person *> &person);
    };




};


#endif //LAB02_OOP_ADMINISTRATIVE_H
