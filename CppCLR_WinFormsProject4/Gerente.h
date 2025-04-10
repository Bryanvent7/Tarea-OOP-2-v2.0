#pragma once
#include "Empleado.h"
#include "pch.h"
#include <iostream>
#include <string>

using namespace System;

public ref class Gerente : public Empleado
{
public:
	property double bono;

	Gerente(String^ id, String^ nombre, String^ apellido, double salario, double bono): Empleado(id, nombre, apellido, salario){}

	virtual String^ ObtenerRol() override
	{
		return "Gerente";
	}
};

