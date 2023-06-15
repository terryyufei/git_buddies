#Arbitrary number of arguments in functions
#this is *args
"""
def make_pizza(size,*toppings):
    print(f"The size of your pizza is {size}\nAnd your toppings are:")
    for topping in toppings:
        print(f"-{topping}")

make_pizza('Medium','Mushrooms','Bacon','Extra Cheese')
make_pizza('Large','Extra chillies','Olives','Pineapples','Meat')
"""
# **kwargs - python accepts key-value pair types of arbitrary number of arguments

def make_cars(manufacturer,model_name,**options):
    """Return a dictionary of car details"""
    car_detail={'manufacturer':manufacturer,
                'model_name':model_name,}

    for option,value in options.items():
        car_detail[option]=value

    return car_detail

my_ractis = make_cars('Toyota','Ractis',
                    interior = 'leather',
                    windows = 'tinted',
                    wheels = 'black')

for key , value in my_ractis.items():
    print(f'-{key} : {value}')


