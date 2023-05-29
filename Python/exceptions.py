#exception is an event or an error that occurs during the execution of our program and 
#it interrupts the normal flow of the program 

try:
    num1 = int(input("Enter any number: "))
    num2 = int(input("Enter a number to divide by: "))
    result = num1/num2
    
except ZeroDivisionError as e:
    print(e)
    print("\nYou can't divide by zero!!")

except ValueError as e:
    print(e)
    print("\nEnter numbers only!!")

except Exception:
    print("\nSomething Broke!!")

else:
    print(f"\nThe Answer is :{result}")

finally:
    print("\nThe Program is done")

