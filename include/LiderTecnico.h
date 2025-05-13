// LiderTecnico.h
#ifndef LIDER_TECNICO_H
#define LIDER_TECNICO_H

#include "Empleado.h"

class LiderTecnico : public Empleado {
public:
    LiderTecnico(const std::string& nombre, double salarioBase);
    double calcularSalario() const override;
    std::string obtenerTipo() const override;
};

#endif
