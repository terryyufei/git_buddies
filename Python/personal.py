class Person:
    def __init__(self, name):
        self._name = name  # Private attribute

    @property
    def name(self):  # Getter method
        return self._name

    @name.setter
    def name(self, value):  # Setter method - modify the value to uppercase
        self._name = value.upper()

    @name.deleter
    def name(self):  # Deleter method
        del self._name

person1 = Person("John") #create an object(person1) then pass the name of that person as the value
print(person1.name)  # Accessing the name property

print('\n')

person1.name = "Jane"  #Modifying property sets the attribute:name to jane
print(person1.name)    #print after modification 

#del person1.name  #Deleting property deletes the current value of the attribute:name
#print(person1._name)