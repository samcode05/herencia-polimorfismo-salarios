// LiderTecnico.cpp
#include "LiderTecnico.h"

LiderTecnico::LiderTecnico(const std::string& nombre, double salarioBase)
        : Empleado(nombre, salarioBase) {}

double LiderTecnico::calcularSalario() const {
    return salarioBase * 1.25;
}

std::string LiderTecnico::obtenerTipo() const {
    return "Líder Técnico";
}
