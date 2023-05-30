class Employee:

    emp = None

    def __init__(self,name,salary):
        self.name = name #public member
        self.__salary =  salary #private member 


    def show(self):
        print("Name is ",self.name, "and salary is ", self.__salary)

emp_1 = Employee("Nick",2000000)
emp_1.show()

#print(emp_1.__salary)