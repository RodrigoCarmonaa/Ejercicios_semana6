#include <iostream>
#include <string>

class Animal {
public:
    Animal(std::string nombre, int edad) : nombre(nombre), edad(edad) {}

    std::string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

private:
    std::string nombre;
    int edad;
};

class Perro : public Animal {
public:
    Perro(std::string nombre, int edad, std::string raza) : Animal(nombre, edad), raza(raza) {}

    void sonido() const {
        std::cout << "El " << getNombre() << " ladra" << std::endl;
    }

private:
    std::string raza;
};

class Gato : public Animal {
public:
    Gato(std::string nombre, int edad, std::string raza) : Animal(nombre, edad), raza(raza) {}

    void sonido() const {
        std::cout << "El " << getNombre() << " maulla" << std::endl;
    }

private:
    std::string raza;
};

class Pajaro : public Animal {
public:
    Pajaro(std::string nombre, int edad, std::string raza) : Animal(nombre, edad), raza(raza) {}

    void sonido() const {
        std::cout << "El " << getNombre() << " canta" << std::endl;
    }

private:
    std::string raza;
};

int main() {
    Perro perro("perro", 5, "Pastor Alemán");
    perro.sonido();

    Gato gato("gato", 3, "Siames");
    gato.sonido();

    Pajaro pajaro("pajaro", 2, "Canario");
    pajaro.sonido();

    return 0;
}
