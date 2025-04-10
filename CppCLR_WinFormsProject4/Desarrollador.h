#pragma once
#include "Empleado.h"
#include "pch.h"
#include <iostream>
#include <string>

using namespace System;

public ref class Desarrollador : public Empleado
{
public:
	property int lineasHechas;
	property double precioPorLinea;
	
	Desarrollador(String^ id, String^ nombre, String^ apellido, double salario, int lineasHechas, double precioPorLinea) : Empleado(id, nombre, apellido, salario)
	{
		this->lineasHechas = lineasHechas;
		this->precioPorLinea = precioPorLinea;
	}
	
	virtual String^ ObtenerRol() override
	{
		return "Desarrollador";
	}
};

