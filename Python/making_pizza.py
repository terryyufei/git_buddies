#import pizza #pizza is a module with the function make_pizza
#from pizza import make_pizza as mp #mp is a nick-name/alias for make_pizza 
#import pizza as p #giving the whole module an alias
from pizza import * #This method means import all functions to this file
make_pizza(16, 'pepperoni')
make_pizza(12, 'mushrooms', 'green peppers', 'extra cheese')

#go to the module pizza and add the code that is there to this file behind the scenes 
# and then allow me to use those functions hence pizza.make_pizza()
"""
Method number 2 is you can import a specific function or specific functions from a module
using the following syntax
from module_name import function_name
in my case

from pizza import make_pizza

make_pizza(16, 'pepperoni')
make_pizza(12, 'mushrooms', 'green peppers', 'extra cheese')

note the difference in calling the functions.

You can import as many functions as you want from a module by 
separating each functions name with a comma
from module_name import function_0, function_1, function_2
"""

    