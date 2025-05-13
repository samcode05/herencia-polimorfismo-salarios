classDiagram
class Empleado {
+nombre: string
+salarioBase: double
+calcularSalario(): double
}

    class DesarrolladorJunior
    class DesarrolladorSenior
    class LiderTecnico
    class Tester

    Empleado <|-- DesarrolladorJunior
    Empleado <|-- DesarrolladorSenior
    Empleado <|-- LiderTecnico
    Empleado <|-- Tester
