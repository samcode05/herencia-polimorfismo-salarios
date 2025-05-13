// DesarrolladorSenior.h
#ifndef DESARROLLADOR_SENIOR_H
#define DESARROLLADOR_SENIOR_H

#include "Empleado.h"

class DesarrolladorSenior : public Empleado {
public:
    DesarrolladorSenior(const std::string& nombre, double salarioBase);
    double calcularSalario() const override;
    std::string obtenerTipo() const override;
};

#endif
