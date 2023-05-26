#MODULE
def make_pizza(size,*toppings):#tell python to accept many toppings 
    "Function that accepts many arguments"
    print(f"\nMaking a {size}-inch pizza with the following toppings:")
    for top in toppings:
        print(f'- {top}')


"""
Another thing you could do is mix both positional and arbitrary arguments.
so in python, your other parameters come first then the one taking on the arbitrary number of arguments comes
last.

def make_pizza(size,*toppings):
    print(f"\nMaking a {size}-inch pizza with the following toppings:")
    for top in toppings:
        print(f'- {top}')

make_pizza(12,'mushroom')
make_pizza(16, 'pepperoni', 'green peppers', 'extra cheese')
"""