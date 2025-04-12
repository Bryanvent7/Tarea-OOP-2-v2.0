#pragma once
#include "Empleado.h"
#include "pch.h"

using namespace System;

public ref class Maestro : public Empleado
{
public:
    property String^ TituloProf;
    property String^ ClaseAsignada;
    property String^ SeccionAsignada;

    Maestro(String^ id, String^ nombre, String^ apellido, double salario,
        String^ titulo, String^ claseAsign, String^ seccionAsign)
        : Empleado(id, nombre, apellido, salario)
    {
        this->TituloProf = titulo;
        this->ClaseAsignada = claseAsign;
        this->SeccionAsignada = seccionAsign;
    }

    virtual String^ ObtenerRol() override
    {
        return "Maestro";
    }
};