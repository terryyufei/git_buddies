# Super  class
class Vehicle:
    def Vehicle_info(self):
        print('Inside Vehicle Super class')

# Child class
class Car(Vehicle):
    def car_info(self):
        print('\nInside Car class which is a child of Vehicle')

# Child class
class SportsCar(Car):
    def sports_car_info(self):
        print('\nInside SportsCar class which is a child of Car')

# Create object of SportsCar
s_car = SportsCar()

# access Vehicle's and Car info using SportsCar object
s_car.Vehicle_info()
s_car.car_info()
s_car.sports_car_info()