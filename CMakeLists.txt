cmake_minimum_required(VERSION 3.30)
project(POLIMORFISMOS)

set(CMAKE_CXX_STANDARD 20)

add_executable(POLIMORFISMOS main.cpp
        include/Empleado.cpp
        include/Empleado.h
        include/DesarrolladorJunior.cpp
        include/DesarrolladorJunior.h
        include/DesarrolladorSenior.cpp
        include/DesarrolladorSenior.h
        include/LiderTecnico.cpp
        include/LiderTecnico.h
        include/tester.cpp
        include/tester.h)
