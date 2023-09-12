class Producto:
    def __init__ (self, nombre, precio, categoria):
        self.nombre=nombre
        self.precio= precio 
        self.categoria= categoria

class Electronico( Producto):
    def __init__ (self, nombre, precio, categoria, marca):
        super(). __init__ (nombre, precio, categoria )
        self.marca= marca 

    def mostrar_detalle (self):
        print(f"telefono marca {self.marca} a solo {self.precio}")

class Alimenticio (Producto):
    def __init__(self, nombre, precio, categoria, fecha_vencimiento):
        super().__init__(nombre, precio, categoria)
        self.fecha_vencimiento= fecha_vencimiento

    def mostrar_detalle(self):
        print(f"este producto {self.nombre} venció el {self.fecha_vencimiento}" )

class Vestimenta(Producto):
    def __init__(self, nombre, precio, categoria, estilo):
        super().__init__(nombre, precio, categoria)
        self.estilo= estilo 

    def mostrar_detalle (self):
        print(f"su pantalon {self.estilo} tiene valor {self.precio}")


electronico=Electronico("carcasa", 800000, "celulares", "samsung S21")

alimenticio= Alimenticio("pate de ternera", 13990, "embutidos", "05-09-2023" )

vestimenta = Vestimenta("jeans", 10990, "hombres", "skinny")

for x in (electronico, alimenticio, vestimenta):
    x.mostrar_detalle()