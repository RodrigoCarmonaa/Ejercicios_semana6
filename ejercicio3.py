class Animal:
    def __init__ (self, nombre, edad):
        self.nombre = nombre
        self.edad= edad

class Perro (Animal):
    def __init__(self, nombre, edad, raza):
        super().__init__(nombre, edad)
        self.raza= raza

    def sonido (self):
        print(f"el {self.nombre} ladra")

class Gato (Animal):
    def __init__(self, nombre, edad, raza):
        super().__init__(nombre, edad)
        self.raza= raza

    def sonido (self):
        print(f"el {self.nombre} maulla")

class Pajaro (Animal):
    def __init__(self, nombre, edad, raza):
        super().__init__(nombre, edad)
        self.raza= raza

    def sonido (self):
        print(f"el {self.nombre} canta")

perro=Perro("perro", 5 , "pastol Aleman")
