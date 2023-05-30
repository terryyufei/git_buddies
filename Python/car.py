class Car:

    def __init__(self,make,model,year,color):
          self.make = make
          self.model = model
          self.year = year
          self.color = color

    def drive(self):
         print("This  " + self.model + " is driving well")

    def reverse(self):
        print("This " + self.model + " is reversing")

