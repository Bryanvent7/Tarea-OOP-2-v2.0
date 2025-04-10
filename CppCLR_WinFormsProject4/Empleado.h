#pragma once
#include "pch.h"
#include <iostream>
#include <string>

using namespace System;	

public ref class Empleado
{
public:
	property String^ ID;
	property String^ Nombre;
	property String^ Apellido;
	property double Salario;

	// Constructor
	Empleado(String^ id, String^ nombre, String^ apellido, double salario)
	{
		ID = id;
		Nombre = nombre;
		Apellido = apellido;
		Salario = salario;
	}

	virtual String^ ObtenerRol()
	{
		return "Empleado";
	}
};

