/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aprobacion.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 17:45
 */

#ifndef APROBACION_H
#define APROBACION_H

#include <iostream>
#include <stdio.h>
#include <string>
#include "dtAcepto.h"
using namespace std;

class aprobacion {
    private: 
        dtDate fechaApro;
        int nota;
public:
    aprobacion();
    aprobacion(const aprobacion& orig);
    aprobacion(dtDate fechaApro, int nota);
    virtual ~aprobacion();
private:

};

#endif /* APROBACION_H */

