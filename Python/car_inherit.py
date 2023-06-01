#Example of Single Inheritance 
# Base class
class Vehicle:
    def Vehicle_info(self):
        print('Inside Vehicle class')

# Child class
class Car(Vehicle):
    def car_info(self):
        print('Inside Car class')

# Create object of the child class Car
car = Car()

# access Vehicle's info using car object
car.Vehicle_info()
car.car_info()