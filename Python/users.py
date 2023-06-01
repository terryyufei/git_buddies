class User:
    def __init__(self,first_name,last_name,gender,age):
        self.first_name = first_name
        self.last_name = last_name
        self.gender = gender
        self.age = age

    def describe_user(self):
        print(f"Your firstname is:{self.first_name}\nYour last_name is:{self.last_name}\nYour gender is:{self.gender}\nYour age is:{self.age}")

    def greet_user(self):
        print(f"Hello {self.first_name} {self.last_name}.Nice to meet you")    

user1 = User("Mike","Morrison","Male",35)
user1.describe_user()
user1.greet_user()