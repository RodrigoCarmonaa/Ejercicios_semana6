#include <iostream>
#include <string>

class Empleado {
public:
    Empleado(std::string nombre, int edad, double salario)
        : nombre(nombre), edad(edad), salario(salario) {}

    virtual void describir_rol() {
        std::cout << "Este es un empleado de la empresa." << std::endl;
    }

protected:
    std::string nombre;
    int edad;
    double salario;
};

class Gerente : public Empleado {
public:
    Gerente(std::string nombre, int edad, double salario, std::string trabajo)
        : Empleado(nombre, edad, salario), trabajo(trabajo) {}

    void describir_rol() override {
        std::cout << "El rol del gerente " << nombre << " es " << trabajo << " y lo ha hecho adecuadamente a sus " << edad << " años." << std::endl;
    }

private:
    std::string trabajo;
};

class Ingeniero : public Empleado {
public:
    Ingeniero(std::string nombre, int edad, double salario, std::string trabajo)
        : Empleado(nombre, edad, salario), trabajo(trabajo) {}

    void describir_rol() override {
        std::cout << "El rol del Ingeniero " << nombre << " es " << trabajo << "." << std::endl;
    }

private:
    std::string trabajo;
};

class Asistente : public Empleado {
public:
    Asistente(std::string nombre, int edad, double salario, std::string trabajo)
        : Empleado(nombre, edad, salario), trabajo(trabajo) {}

    void describir_rol() override {
        std::cout << "El rol del Asistente " << nombre << " es " << trabajo << "." << std::endl;
    }

private:
    std::string trabajo;
};

int main() {
    Gerente gerente("Elliot Mardones", 35, 2000000, "supervisar el trabajo realizado por sus empleados");
    Ingeniero ingeniero("Carmona", 27, 1000000, "programar y cumplir con las necesidades de la empresa");
    Asistente asistente("Escares", 32, 700000, "ayudar y aconsejar al ingeniero xd");

    Empleado* empleados[] = {&gerente, &ingeniero, &asistente};

    for (auto empleado : empleados) {
        empleado->describir_rol();
    }

    return 0;
}
