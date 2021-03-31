//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University() {}


//University::University(name:string, professor:Professor, administrative:Administrative, professorList vector<Professor>, administrativelist vector<Administrative> ) {}

University::University((name:const std::string &name) : name(name))

University::University(((name:const std::string &name) : name(name)),( professor:const  &Professor), (administrative:const &Administrative)){

University::University(Professor *_professor) : professor(_professor) {}
University::University(Administrative *_administrative) : administrative(_administrative) {}

const std::string &Person::getName():getName(firstname,lastname) const {//get name
    return name;
}
const std::string &professor::getProfessor():getProfessor(professor) const {//get profesor
return professor;
}
void Professor::setProfessor(const std::string &professor) {//set name
    Professor::professor = professor;
}

const std::string &professor::getProfessor():getProfessor(professor) const {//get profesor
return professor;
}
void Administrative::setAdministrative(const std::string &administrative) {//set administrativo
    Administrative::Administrative = administrative;
}
const std::string &administrative::getAdministrative():getAdministrative(administrative) const {//get administrativo
return administrative;

}
//oid addprofessor(){}
void Professor::addProfessor(Professor *_professor) { //Metodo add professor
    professors.push_back(_professor);
}

void Administrative::addAdministrative(Administrative *_administrative) { //metodo add administrative
    administratives.push_back(_administrative);
}
const std::string &professor::getListProfessor(listProfessor) const {
    return professor;
}}

const std::string &administrative::getListAdministrative(listAdministrative) const {
return administrative;
}}


//