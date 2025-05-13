// Tester.h
#ifndef TESTER_H
#define TESTER_H

#include "Empleado.h"

class Tester : public Empleado {
public:
    Tester(const std::string& nombre, double salarioBase);
    double calcularSalario() const override;
    std::string obtenerTipo() const override;
};

#endif
