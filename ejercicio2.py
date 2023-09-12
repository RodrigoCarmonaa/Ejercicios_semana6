#Sistema de Empleados de una Empresa

class Empleado:
    def __init__ (self, nombre, edad, salario):
        self.nombre= nombre
        self.edad= edad
        self.salario= salario 

class Gerente(Empleado):
    def __init__(self, nombre, edad, salario, trabajo):
        super().__init__(nombre, edad, salario)
        self.trabajo= trabajo

    def describir_rol (self):
        print (f" el rol del gerente {self.nombre} es {self.trabajo} y lo ha hecho adecuadamente a sus {self.edad}")
    
class Ingeniero(Empleado):
    def __init__(self, nombre, edad, salario, trabajo):
        super().__init__(nombre, edad, salario)
        self.trabajo= trabajo

    def describir_rol (self):
        print (f" el rol del Ingeniero {self.nombre} es {self.trabajo}")
    
class Asistente (Empleado):
    def __init__(self, nombre, edad, salario, trabajo):
        super().__init__(nombre, edad, salario)
        self.trabajo= trabajo

    def describir_rol (self):
        print (f" el rol del Asistente {self.nombre} es {self.trabajo}")
    
gerente= Gerente("Elliot Mardones", 35, 2000000, "supervisar el trabajo realizado por sus empleados")
ingeniero= Ingeniero("Carmona", 27, 1000000, "programar y cumplir con las necesidades de la empresa")
asistente = Asistente ("Escares", 32, 700000, "ayudar y aconsejar al ingeniero xd")

for i in (gerente, ingeniero, asistente):
    i.describir_rol()