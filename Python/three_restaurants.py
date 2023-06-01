class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        """Initialize the restaurant."""
        print(f"The name is {self.restaurant_name} and the cuisine is {self.cuisine_type}")

    def open_restaurant(self):
        """Display a summary of the restaurant."""
        print(f"The restaurant {self.restaurant_name} is open")

restaurant = Restaurant("Matteo's", "Italian cuisine")
restaurant.describe_restaurant()
restaurant.open_restaurant()

restaurant1 = Restaurant("Cj's", "Italian cuisine")
restaurant1.describe_restaurant()

restaurant2 = Restaurant("Highland's", "Chinese cuisine")
restaurant2.describe_restaurant() 

restaurant3 = Restaurant("Swahili plate", "Kenyan cuisine")
restaurant3.describe_restaurant()

print(restaurant.restaurant_name)
print(restaurant.cuisine_type)


