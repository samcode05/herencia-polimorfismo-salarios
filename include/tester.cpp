// Tester.cpp
#include "Tester.h"

Tester::Tester(const std::string& nombre, double salarioBase)
        : Empleado(nombre, salarioBase) {}

double Tester::calcularSalario() const {
    return salarioBase * 1.05;
}

std::string Tester::obtenerTipo() const {
    return "Tester";
}
