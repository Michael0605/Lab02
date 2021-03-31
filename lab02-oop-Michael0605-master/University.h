//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

class University {
        Professor *professor;

    public:
        University();

        University(Professor *_professor);
    };


#endif //RELACION DE AGREGACION_University_H

};


#endif //LAB02_OOP_UNIVERSITY_H
