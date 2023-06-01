class Company:
  def company_name(self):
        return 'Google'

class Employee(Company):
    def info(self):
        # Calling a method from our superclass using super()function
        c_name = super().company_name()
        print("Jessica works at", c_name)

# Creating object of child class
emp = Employee()
emp.info()
