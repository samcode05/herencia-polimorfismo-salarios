// DesarrolladorJunior.cpp
#include "DesarrolladorJunior.h"

DesarrolladorJunior::DesarrolladorJunior(const std::string& nombre, double salarioBase)
        : Empleado(nombre, salarioBase) {}

double DesarrolladorJunior::calcularSalario() const {
    return salarioBase;
}

std::string DesarrolladorJunior::obtenerTipo() const {
    return "Desarrollador Junior";
}
