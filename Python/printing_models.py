import printing_functions as pf

unprinted_designs = ['iphone case', 'robot pendant', 'dodecahedron']
completed_models = []

pf.print_models(unprinted_designs,completed_models)
pf.show_completed_models(completed_models)

"""
These are the different approaches for using the import statement to import modules into your code:

import module_name
(In this method you use the .dot notation ie: module_name.function_name to call the function)

from module_name import function_name
(In this method you are importing specific functions from the model)
(To call the function just go ahead and use the function_name(arguments) as normal)

from module_name import function_name as fn
(In this method use the alias you have provided after the as KeyWord)
(eg fn(argument1,argument2))

import module_name as mn
(In this method, use the alias provided and also use the .dot notation with the function name from the module)
(eg mn.function_name(arg1,arg2))

from module_name import *
(This method means import all functions to this file)
(In this case you dont have to use the dot notation just go ahead and call the function as normal)

"""