// Empleado.h
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string nombre;
    double salarioBase;

public:
    Empleado(const std::string& nombre, double salarioBase);
    virtual ~Empleado() {}

    virtual double calcularSalario() const = 0; // MÉTODO POLIMÓRFICO
    virtual std::string obtenerTipo() const = 0;

    std::string getNombre() const;
};

#endif
