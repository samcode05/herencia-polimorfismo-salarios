classDiagram
class Empleado {
-nombre: string
-salarioBase: double
+calcularSalario(): double
}

    class DesarrolladorJunior {
        +calcularSalario(): double
    }

    class DesarrolladorSenior {
        +calcularSalario(): double
    }

    class LiderTecnico {
        +calcularSalario(): double
    }

    class Tester {
        +calcularSalario(): double
    }

    Empleado <|-- DesarrolladorJunior
    Empleado <|-- DesarrolladorSenior
    Empleado <|-- LiderTecnico
    Empleado <|-- Tester
