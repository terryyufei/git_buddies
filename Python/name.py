class User:
      id = 89
      name = "no name"
      __password = None
      
      
      def __init__(self, new_name=None , *middle_name):
        self.is_new = True
        if new_name is not None:
            self.name = new_name
        print(f"Your name is {self.name}")

u = User("John")
u.name

 