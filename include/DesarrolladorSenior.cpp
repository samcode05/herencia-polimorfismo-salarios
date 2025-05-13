// DesarrolladorSenior.cpp
#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior(const std::string& nombre, double salarioBase)
        : Empleado(nombre, salarioBase) {}

double DesarrolladorSenior::calcularSalario() const {
    return salarioBase * 1.20;
}

std::string DesarrolladorSenior::obtenerTipo() const {
    return "Desarrollador Senior";
}
