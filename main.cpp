// main.cpp
#include <iostream>
#include <vector>
#include "include/Empleado.h"
#include "include/DesarrolladorJunior.h"
#include "include/DesarrolladorSenior.h"
#include "include/LiderTecnico.h"
#include "include/Tester.h"

void inicializarDatos(std::vector<Empleado*>& empleados) {
    empleados.push_back(new DesarrolladorJunior("Juan", 1000));
    empleados.push_back(new DesarrolladorJunior("Laura", 1100));
    empleados.push_back(new DesarrolladorSenior("Carlos", 2000));
    empleados.push_back(new DesarrolladorSenior("Sofía", 2100));
    empleados.push_back(new LiderTecnico("Andrés", 3000));
    empleados.push_back(new LiderTecnico("María", 3100));
    empleados.push_back(new Tester("Pedro", 1500));
    empleados.push_back(new Tester("Luisa", 1600));
}

int main() {
    std::vector<Empleado*> empleados;
    inicializarDatos(empleados);

    double totalNomina = 0;

    for (Empleado* e : empleados) {
        double salario = e->calcularSalario();
        std::cout << e->obtenerTipo() << " " << e->getNombre()
                  << " gana: $" << salario << std::endl;
        totalNomina += salario;
    }

    std::cout << "\nTotal a pagar en nómina: $" << totalNomina << std::endl;

    // Liberar memoria
    for (Empleado* e : empleados) {
        delete e;
    }

    return 0;
}
