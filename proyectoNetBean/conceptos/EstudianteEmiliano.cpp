/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estudiante.cpp
 * Author: emi
 * 
 * Created on 1 de junio de 2016, 03:42 PM
 */

#include "Estudiante.h"

Estudiante::Estudiante(string ci, string nombre, string apellido) {
    this->Setapellido(apellido);
    this->Setci(ci);
    this->Setnombre(nombre);
            
}



Estudiante::~Estudiante() {
}

DtEstudiante* Estudiante::getDataType() {
    return new DtEstudiante(this->Getci(), this->Getnombre(), this->Getapellido());
}