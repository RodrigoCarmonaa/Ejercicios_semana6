#include <iostream>
#include <string>

class Producto {
public:
    Producto(std::string nombre, double precio, std::string categoria)
        : nombre(nombre), precio(precio), categoria(categoria) {}

    std::string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }
    std::string getCategoria() const { return categoria; }

private:
    std::string nombre;
    double precio;
    std::string categoria;
};

class Electronico : public Producto {
public:
    Electronico(std::string nombre, double precio, std::string categoria, std::string marca)
        : Producto(nombre, precio, categoria), marca(marca) {}

    void mostrarDetalle() const {
        std::cout << "Teléfono marca " << marca << " a solo " << getPrecio() << std::endl;
    }

private:
    std::string marca;
};

class Alimenticio : public Producto {
public:
    Alimenticio(std::string nombre, double precio, std::string categoria, std::string fechaVencimiento)
        : Producto(nombre, precio, categoria), fechaVencimiento(fechaVencimiento) {}

    void mostrarDetalle() const {
        std::cout << "Este producto " << getNombre() << " venció el " << fechaVencimiento << std::endl;
    }

private:
    std::string fechaVencimiento;
};

class Vestimenta : public Producto {
public:
    Vestimenta(std::string nombre, double precio, std::string categoria, std::string estilo)
        : Producto(nombre, precio, categoria), estilo(estilo) {}

    void mostrarDetalle() const {
        std::cout << "Su pantalón " << estilo << " tiene valor " << getPrecio() << std::endl;
    }

private:
    std::string estilo;
};

int main() {
    Electronico electronico("carcasa", 800000, "celulares", "samsung S21");
    Alimenticio alimenticio("pate de ternera", 13990, "embutidos", "05-09-2023");
    Vestimenta vestimenta("jeans", 10990, "hombres", "skinny");

    electronico.mostrarDetalle();
    alimenticio.mostrarDetalle();
    vestimenta.mostrarDetalle();

    return 0;
}
