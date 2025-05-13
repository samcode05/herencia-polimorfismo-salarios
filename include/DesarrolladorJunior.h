// DesarrolladorJunior.h
#ifndef DESARROLLADOR_JUNIOR_H
#define DESARROLLADOR_JUNIOR_H

#include "Empleado.h"

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(const std::string& nombre, double salarioBase);
    double calcularSalario() const override;
    std::string obtenerTipo() const override;
};

#endif
