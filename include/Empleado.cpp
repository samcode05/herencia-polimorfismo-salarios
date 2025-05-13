// Empleado.cpp
#include "Empleado.h"

Empleado::Empleado(const std::string& nombre, double salarioBase)
        : nombre(nombre), salarioBase(salarioBase) {}

std::string Empleado::getNombre() const {
    return nombre;
}
